@class NSMutableArray;

@interface HSCloudItemIDList : NSObject <NSSecureCoding> {
    NSMutableArray *_itemIDs;
    NSMutableArray *_idTypes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long count;

- (id)init;
- (void).cxx_destruct;
- (void)addCloudItemID:(unsigned long long)a0 idType:(long long)a1;
- (void)insertCloudItemID:(unsigned long long)a0 idType:(long long)a1 atIndex:(unsigned long long)a2;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)enumerateCloudItemIDsUsingBlock:(id /* block */)a0;
- (void)encodeWithCoder:(id)a0;

@end
