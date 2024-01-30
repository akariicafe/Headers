@class NSDictionary, NSMutableDictionary;

@interface ARFrameTimingData : NSObject {
    NSMutableDictionary *_timestampsByDataClassKey;
}

@property (nonatomic) double videoLatency;
@property (readonly, nonatomic) NSDictionary *timestamps;

- (id)init;
- (void).cxx_destruct;
- (void)addTimestamp:(double)a0 forDataOfClass:(Class)a1;

@end
