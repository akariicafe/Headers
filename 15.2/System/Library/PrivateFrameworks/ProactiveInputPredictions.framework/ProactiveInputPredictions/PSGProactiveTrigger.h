@class NSString, NSDictionary;

@interface PSGProactiveTrigger : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long triggerSourceType;
@property (readonly, nonatomic) NSString *triggerCategory;
@property (readonly, nonatomic) NSDictionary *triggerAttributes;

+ (id)getSearchTerm:(id)a0;
+ (id)getGivenNameQualifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToTrigger:(id)a0;
- (id)initWithSourceType:(unsigned long long)a0 category:(id)a1 attributes:(id)a2;

@end
