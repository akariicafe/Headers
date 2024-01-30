@class NSString, TSPDigest;

@interface TSPDataUniqueIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) TSPDigest *digest;
@property (readonly, nonatomic) NSString *digestString;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithDigest:(id)a0;

@end
