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

- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)markDirty;
- (id)initWithInputManagers:(id)a0;
- (BOOL)isValue:(id)a0 equalToValue:(id)a1;
- (void)fetchValueWithCachePolicy:(unsigned long long)a0 qualityOfService:(long long)a1 completion:(id /* block */)a2;
- (id)inputManagers;

@end
