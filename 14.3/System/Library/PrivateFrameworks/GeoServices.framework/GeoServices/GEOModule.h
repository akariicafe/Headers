@class GEOModuleOptions, GEOPDModule;

@interface GEOModule : NSObject {
    GEOPDModule *_module;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) GEOModuleOptions *options;

- (void).cxx_destruct;
- (id)initWithModule:(id)a0;

@end
