@class NSString, TSPDigest;

@interface TSPDataUniqueIdentifier : NSObject <NSCopying>

@property (readonly, nonatomic) TSPDigest *digest;
@property (readonly, nonatomic) NSString *digestString;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithDigest:(id)a0;

@end
