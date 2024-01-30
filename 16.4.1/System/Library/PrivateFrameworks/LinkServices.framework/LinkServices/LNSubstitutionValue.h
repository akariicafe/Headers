@class NSUUID, NSString, LNStaticDeferredLocalizedString, LNValue;

@interface LNSubstitutionValue : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSUUID *parameterIdentifier;
@property (readonly, copy, nonatomic) NSString *titleKey;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, copy, nonatomic) LNValue *value;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithParameterIdentifier:(id)a0 title:(id)a1 titleKey:(id)a2 value:(id)a3;
- (id)initWithTitle:(id)a0 titleKey:(id)a1 value:(id)a2;

@end
