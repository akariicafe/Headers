@class NSString, ARCircularArray;

@interface ARSyncedUltraWideForwardingStrategy : NSObject <ARTechniqueForwardingStrategy> {
    ARCircularArray *_mostRecentTimestamps;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mostRecentTimestampsLock;
    long long _maxFrameRate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)frameRateLimitAllowsProcessingThisData:(id)a0 mostRecentTimestamps:(id)a1 maxFrameRate:(long long)a2;

- (void).cxx_destruct;
- (id)initWithMaxFrameRate:(long long)a0;
- (BOOL)shouldProcessData:(id)a0;
- (BOOL)shouldRequestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
