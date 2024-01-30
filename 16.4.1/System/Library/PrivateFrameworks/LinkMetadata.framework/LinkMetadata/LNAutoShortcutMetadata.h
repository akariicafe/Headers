@class NSString, NSArray, LNStaticDeferredLocalizedString;

@interface LNAutoShortcutMetadata : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *actionIdentifier;
@property (readonly, copy, nonatomic) NSArray *phraseTemplates;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *title;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *shortTitle;
@property (readonly, copy, nonatomic) LNStaticDeferredLocalizedString *autoShortcutDescription;
@property (readonly, copy, nonatomic) NSString *systemImageName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithActionIdentifier:(id)a0 phraseTemplates:(id)a1 shortTitle:(id)a2 autoShortcutDescription:(id)a3 systemImageName:(id)a4;
- (id)initWithActionIdentifier:(id)a0 phraseTemplates:(id)a1 title:(id)a2 shortTitle:(id)a3 autoShortcutDescription:(id)a4 systemImageName:(id)a5;

@end
