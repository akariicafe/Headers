@protocol NSObject, NSCopying;

@interface GKResourceRequest : NSObject

@property (copy, nonatomic) id<NSObject, NSCopying> requestKey;
@property (copy, nonatomic) id<NSObject> cacheKey;
@property (readonly, nonatomic) unsigned long long cacheOptions;

+ (id)makeUniqueKey;

- (void)didLoadResource:(id)a0 error:(id)a1;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (id)makeLoadOperation;

@end
