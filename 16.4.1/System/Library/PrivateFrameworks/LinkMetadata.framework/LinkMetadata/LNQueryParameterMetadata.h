@class NSString, LNStaticDeferredLocalizedString, NSArray;

@interface LNQueryParameterMetadata : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *propertyIdentifier;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *localizedTitle;
@property (readonly, copy, nonatomic) NSArray *comparators;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPropertyIdentifier:(id)a0 localizedTitle:(id)a1 comparators:(id)a2;
- (id)initWithPropertyIdentifier:(id)a0 title:(id)a1 comparators:(id)a2;

@end
