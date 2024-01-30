@class LNStaticDeferredLocalizedString;

@interface LNLocalizedStringResourceDialog : LNDialog <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *fullString;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *supportingString;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithFullString:(id)a0 supportingString:(id)a1 localeIdentifier:(id)a2;

@end
