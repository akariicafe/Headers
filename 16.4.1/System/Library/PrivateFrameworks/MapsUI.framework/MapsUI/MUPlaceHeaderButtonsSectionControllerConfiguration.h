@class MKETAProvider, GEOHeaderButtonModuleConfiguration;
@protocol MUHeaderButtonMenuActionProvider;

@interface MUPlaceHeaderButtonsSectionControllerConfiguration : NSObject

@property (weak, nonatomic) MKETAProvider *etaProvider;
@property (nonatomic) BOOL showMoreButton;
@property (nonatomic) BOOL canShowDetourTime;
@property (retain, nonatomic) GEOHeaderButtonModuleConfiguration *buttonModuleConfiguration;
@property (weak, nonatomic) id<MUHeaderButtonMenuActionProvider> menuProvider;

- (void).cxx_destruct;

@end
