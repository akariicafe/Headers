@protocol NSObject, NSCopying;

@interface GKResourceRequest : NSObject

@property (copy, nonatomic) id<NSObject, NSCopying> requestKey;
@property (copy, nonatomic) id<NSObject> cacheKey;
@property (readonly, nonatomic) unsigned long long cacheOptions;

+ (id)makeUniqueKey;

- (id)init;
- (void).cxx_destruct;
- (id)makeLoadOperation;
- (unsigned long long)hash;
- (void)didLoadResource:(id)a0 error:(id)a1;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
