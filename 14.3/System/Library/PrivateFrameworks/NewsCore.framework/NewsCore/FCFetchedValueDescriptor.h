@class NSArray;

@interface FCFetchedValueDescriptor : NSObject

@property (readonly, nonatomic) NSArray *inputManagers;

- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)fastCachedValue;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)valuePromiseWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1;

@end
