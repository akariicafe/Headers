@interface PRComplicationDefaultsDomain : BSAbstractDefaultDomain

@property (nonatomic) BOOL shouldShowInternalWidgets;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
