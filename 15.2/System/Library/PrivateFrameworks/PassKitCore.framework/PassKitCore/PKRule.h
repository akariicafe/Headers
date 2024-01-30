@class NSString, NSPredicate, PKOSVersionRequirementRange;

@interface PKRule : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *predicateFormat;
@property (retain, nonatomic) PKOSVersionRequirementRange *osVersionRequirementRange;
@property (readonly, nonatomic) NSPredicate *predicate;

- (void)encodeWithCoder:(id)a0;
- (void)parsePredicateFormat;
- (id)initWithIdentifier:(id)a0 predicateFormat:(id)a1 osVersionRequirementRange:(id)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
