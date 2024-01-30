@class NSDictionary, NSString, NSArray;

@interface SSBagProfileConfig : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *bagKeysDictionary;
@property (nonatomic) double bagLoadTimeout;
@property (copy, nonatomic) NSString *profile;
@property (copy, nonatomic) NSString *profileVersion;
@property (readonly, nonatomic) NSArray *bagKeys;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)bagKeyForStringRepresentation:(id)a0;

@end
