@class SKUIClientContext;

@interface SKUIJSRestrictions : IKJSObject <SKUIJSRestrictions> {
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)a0;
- (void)setAllowExplicitContent;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(id)a0;
- (void)didDisplayExplicitRestrictionAlertOfType:(id)a0;
- (void)isRestrictionsPasscodeSet:(id)a0;
- (long long)_explicitRestrictionAlertTypeForTypeString:(id)a0;
- (BOOL)isRestrictedApp:(id)a0;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(id)a0 :(id)a1;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)a0 :(id)a1;
- (id)initWithAppContext:(id)a0 clientContext:(id)a1;

@end
