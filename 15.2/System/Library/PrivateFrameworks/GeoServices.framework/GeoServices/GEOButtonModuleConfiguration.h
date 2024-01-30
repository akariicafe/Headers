@class NSArray, GEOPDButtonModuleConfiguration;

@interface GEOButtonModuleConfiguration : NSObject {
    GEOPDButtonModuleConfiguration *_buttonModuleConfig;
}

@property (readonly, nonatomic) NSArray *buttonItems;

- (id)description;
- (id)initWithButtonModuleConfiguration:(id)a0;
- (void).cxx_destruct;

@end
