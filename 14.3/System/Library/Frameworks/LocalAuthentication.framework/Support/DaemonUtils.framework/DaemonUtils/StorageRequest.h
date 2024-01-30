@interface StorageRequest : Request

@property (readonly, nonatomic) long long domain;
@property (readonly, nonatomic) long long key;

- (id)initWithStorageDomain:(long long)a0 key:(long long)a1;

@end
