@class GEOPDHeaderButtonsConfiguration;

@interface GEOHeaderButtonModuleConfiguration : NSObject {
    GEOPDHeaderButtonsConfiguration *_headerButtonsConfiguration;
}

@property (readonly, nonatomic, getter=shouldSuppressDirections) BOOL suppressDirections;

- (id)initWithHeaderButtonConfiguration:(id)a0;
- (void).cxx_destruct;

@end
