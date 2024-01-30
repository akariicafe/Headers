@interface PXFeedbackSender : NSObject {
    unsigned long long _feedbackType;
    BOOL _userLikedResults;
}

- (void)connection:(id)a0 didFailWithError:(id)a1;
- (void)connectionDidFinishLoading:(id)a0;
- (void)connection:(id)a0 didReceiveResponse:(id)a1;
- (void)_incrementMessageTracerCounterForMixedFeedbackValueKey:(id)a0 ofEntry:(id)a1;
- (void)_incrementAGGDCounterForFeedbackValueKey:(id)a0 ofEntry:(id)a1;
- (void)_incrementCounterForFeedbackValueKey:(id)a0 ofEntry:(id)a1;
- (void)_incrementCounterForMixedFeedbackValueKey:(id)a0 ofEntry:(id)a1;
- (void)_incrementMessageTracerCounterForFeedbackValueKey:(id)a0 ofEntry:(id)a1;
- (void)_sendFeedbackEntryToOSService:(id)a0;
- (id)generateFeedbackParamsStringForEntry:(id)a0;
- (void)sendFeedback:(id)a0 forFeedbackType:(unsigned long long)a1;
- (void)sendFeedbackToServer:(id)a0;
- (BOOL)sendFeedbackWithFeedbackEntryUUID:(id)a0;
- (BOOL)sendPendingFeedbackToServer;
- (void)testTalkToServer;

@end
