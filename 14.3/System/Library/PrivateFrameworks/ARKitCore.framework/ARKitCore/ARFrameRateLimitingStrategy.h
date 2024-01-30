@class NSString, ARCircularArray;

@interface ARFrameRateLimitingStrategy : NSObject <ARTechniqueForwardingStrategy> {
    long long _frameRate;
    ARCircularArray *_mostRecentTimestamps;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFrameRate:(long long)a0;
- (BOOL)isEqual:(id)a0;
- (BOOL)shouldProcessData:(id)a0;
- (BOOL)shouldRequestResultDataAtTimestamp:(double)a0 context:(id)a1;

@end
