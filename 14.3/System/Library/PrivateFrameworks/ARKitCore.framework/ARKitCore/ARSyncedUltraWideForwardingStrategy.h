@class NSString, ARCircularArray;

@interface ARSyncedUltraWideForwardingStrategy : NSObject <ARTechniqueForwardingStrategy> {
    ARCircularArray *_mostRecentTimestamps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldProcessData:(id)a0;
- (BOOL)shouldRequestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
