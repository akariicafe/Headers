@class NSString, NSArray, NAFuture;

@interface CPInformationTemplate : CPTemplate <CPTemplateDelegate, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (readonly, nonatomic) long long layout;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performUpdate;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)handleActionForControlIdentifier:(id)a0;
- (id)_sanitizeItems:(id)a0;
- (id)_sanitizeButtons:(id)a0;
- (id)initWithTitle:(id)a0 layout:(long long)a1 items:(id)a2 actions:(id)a3;
- (void)updateTemplatePropertiesFromTemplate:(id)a0;

@end
