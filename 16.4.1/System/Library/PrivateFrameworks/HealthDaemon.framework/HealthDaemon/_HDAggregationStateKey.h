@class NSString, HKDevice;

@interface _HDAggregationStateKey : NSObject <NSCopying> {
    NSString *_collectorIdentifier;
    HKDevice *_device;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
