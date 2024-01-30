@class NSString, HKDevice;

@interface _HDAggregationStateKey : NSObject <NSCopying> {
    NSString *_collectorIdentifier;
    HKDevice *_device;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
