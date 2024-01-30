@class NSArray;

@interface SBRecentDisplayItemsDefaults : SBAbstractSpringBoardDefaultDomain

@property (retain, nonatomic) NSArray *commandTabPlistRepresentation;
@property (retain, nonatomic) NSArray *dockRecentsPlistRepresentation;

- (void)_bindAndRegisterDefaults;

@end
