@class NSString, ARCircularArray;

@interface ARSyncedUltraWideForwardingStrategy : NSObject <ARTechniqueForwardingStrategy> {
    ARCircularArray *_mostRecentTimestamps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldProcessData:(id)a0;
- (BOOL)shouldRequestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
