@interface VCWRMHandler : NSObject {
    double _lastConnectionUnstableTime;
    double _WRMNotificationRequestTime;
}

@property (readonly) int localWRMLinkTypeSuggestion;
@property (readonly) int remoteWRMLinkTypeSuggestion;
@property (readonly) BOOL isRemoteDuplicating;
@property double localLinkTypeSuggestionChangeTime;

- (id)init;
- (unsigned char)processLocalWRMNotification:(struct { int x0; int x1; unsigned long long x2; char x3[128]; unsigned long long x4; unsigned long long x5; } *)a0 isAudioOnly:(BOOL)a1;
- (unsigned char)processRemoteWRMSuggestion:(int)a0 isRemoteDuplicating:(BOOL)a1;
- (BOOL)shouldForceWRMRecommendationUsingUserDefaults;
- (BOOL)shouldRequestWRMNotificationWithDuplicationReason:(unsigned char)a0 isDuplicationEnabled:(BOOL)a1 isLocalUsingCellular:(BOOL)a2 atTime:(double)a3;
- (void)updateWRMNotificationRequestTime:(double)a0;

@end
