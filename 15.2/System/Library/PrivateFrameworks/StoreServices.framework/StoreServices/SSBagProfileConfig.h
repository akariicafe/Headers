@class NSDictionary, NSString, NSArray;

@interface SSBagProfileConfig : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *bagKeysDictionary;
@property (nonatomic) double bagLoadTimeout;
@property (copy, nonatomic) NSString *profile;
@property (copy, nonatomic) NSString *profileVersion;
@property (readonly, nonatomic) NSArray *bagKeys;

- (id)bagKeyForStringRepresentation:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
