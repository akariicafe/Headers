@class NSArray, GEOPDUnifiedActionModuleConfiguration;

@interface GEOUnifiedActionButtonModuleConfiguration : NSObject {
    GEOPDUnifiedActionModuleConfiguration *_buttonModuleConfig;
}

@property (readonly, nonatomic) NSArray *buttonItems;

- (id)description;
- (void).cxx_destruct;
- (id)initWithUnifiedActionModuleConfiguration:(id)a0;

@end
