@class NSString, AceObject, AFBulletin, NSDictionary;

@interface AFApplicationContext : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *associatedBundleIdentifier;
@property (readonly, copy, nonatomic) AFBulletin *bulletin;
@property (readonly, copy, nonatomic) AceObject *aceContext;
@property (readonly, copy, nonatomic) NSDictionary *contextDictionary;

+ (id)newWithBuilder:(id /* block */)a0;

- (id)_descriptionWithIndent:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)mutatedCopyWithMutator:(id /* block */)a0;
- (unsigned long long)hash;
- (id)initWithAssociatedBundleIdentifier:(id)a0 bulletin:(id)a1 aceContext:(id)a2 contextDictionary:(id)a3;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
