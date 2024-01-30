@class NSDictionary;

@interface SBAnalyticsDefaults : SBAbstractSpringBoardDefaultDomain

@property (copy, nonatomic) NSDictionary *engagementPlistRepresentation;

- (void)_bindAndRegisterDefaults;

@end
