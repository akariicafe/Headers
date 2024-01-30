@class SKUIClientContext;

@interface SKUIJSRestrictions : IKJSObject <SKUIJSRestrictions> {
    SKUIClientContext *_clientContext;
}

- (void)isRestrictionsPasscodeSet:(id)a0;
- (void).cxx_destruct;
- (void)didDisplayExplicitRestrictionAlertOfType:(id)a0;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(id)a0;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)a0;
- (void)setAllowExplicitContent;
- (long long)_explicitRestrictionAlertTypeForTypeString:(id)a0;
- (id)initWithAppContext:(id)a0 clientContext:(id)a1;
- (BOOL)isRestrictedApp:(id)a0;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)a0 :(id)a1;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(id)a0 :(id)a1;

@end
