@interface TAEventBufferSettings : NSObject

@property (readonly, nonatomic) unsigned long long bufferCapacity;
@property (readonly, nonatomic) double bufferTimeIntervalOfRetention;

- (id)initWithBufferCapacityOrDefault:(id)a0 bufferTimeIntervalOfRetentionOrDefault:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBufferCapacity:(unsigned long long)a0 bufferTimeIntervalOfRetention:(double)a1;

@end
