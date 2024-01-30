@class NSString, NSMutableArray;

@interface PMLTrackerMockAdapter : NSObject <PMLTrackerAdapterProtocol> {
    NSMutableArray *_trackedMessages;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)postMetricId:(unsigned int)a0 message:(id)a1;
- (void)clearAllTrackedMessages;
- (id)trackedMessagesByClass:(Class)a0;

@end
