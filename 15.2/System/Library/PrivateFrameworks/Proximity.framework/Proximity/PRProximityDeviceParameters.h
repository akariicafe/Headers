@class NSNumber;

@interface PRProximityDeviceParameters : NSObject

@property (readonly) void *filter;
@property (readonly) unsigned long long samplesize;
@property (readonly) NSNumber *rssiImmediate;
@property (readonly) NSNumber *rssiNear;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFilter:(void *)a0 sampleSize:(unsigned long long)a1 rssiImmediate:(id)a2 rssiNear:(id)a3;

@end
