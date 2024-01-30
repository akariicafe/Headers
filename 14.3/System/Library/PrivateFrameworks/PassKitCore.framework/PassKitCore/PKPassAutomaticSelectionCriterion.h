@class NSString, NSSet, NSData;

@interface PKPassAutomaticSelectionCriterion : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *type;
@property (nonatomic) long long technologyType;
@property (nonatomic) BOOL supportsExpress;
@property (copy, nonatomic) NSSet *primaryTCIs;
@property (copy, nonatomic) NSSet *TCIs;
@property (nonatomic) BOOL supportsInSessionExpress;
@property (copy, nonatomic) NSData *mask;

+ (id)expressModeForCriterion:(id)a0;
+ (id)criterionForExpressMode:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)asDictionary;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
