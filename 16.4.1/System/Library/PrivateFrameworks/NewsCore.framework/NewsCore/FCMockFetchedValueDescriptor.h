@class NSArray, NSError;
@protocol NFCopying;

@interface FCMockFetchedValueDescriptor : FCFetchedValueDescriptor

@property (nonatomic) long long lastFetchQualityOfService;
@property (nonatomic) unsigned long long lastFetchCachePolicy;
@property (nonatomic) unsigned long long willFetchCount;
@property (readonly, copy, nonatomic) NSArray *myInputManagers;
@property (copy, nonatomic) id /* block */ willFetchBlock;
@property (copy, nonatomic) id<NFCopying> fetchValue;
@property (copy, nonatomic) NSError *fetchError;
@property (copy, nonatomic) id<NFCopying> fastCachedValue;
@property (copy, nonatomic) id /* block */ valueEqualityTest;

- (id)inputManagers;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)initWithInputManagers:(id)a0;
- (void)markDirty;

@end
