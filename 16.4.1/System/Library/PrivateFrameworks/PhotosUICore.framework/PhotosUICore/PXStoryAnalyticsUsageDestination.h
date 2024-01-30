@class NSString, NSMutableDictionary;

@interface PXStoryAnalyticsUsageDestination : NSObject <CPAnalyticsDestinationProtocol> {
    NSMutableDictionary *_sessionInfosByIdentifier;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)processEvent:(id)a0;
- (id)_existingInfoForEvent:(id)a0;
- (id)_popInfoForEndEvent:(id)a0;
- (id)_existingInfoForEvent:(id)a0 pop:(BOOL)a1;
- (void)_sendSummaryEventsForInfo:(id)a0;
- (id)_createInfoForEvent:(id)a0;
- (id)init;
- (void)_enumerateExistingInfosUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_createDefaultPayloadForInfo:(id)a0;

@end
