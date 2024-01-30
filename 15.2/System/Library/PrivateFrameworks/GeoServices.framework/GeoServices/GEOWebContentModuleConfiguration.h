@class NSURL, GEOPDWebModuleConfiguration;

@interface GEOWebContentModuleConfiguration : NSObject {
    GEOPDWebModuleConfiguration *_webModuleConfig;
}

@property (readonly, nonatomic, getter=shouldDrawPlatter) BOOL drawPlatter;
@property (readonly, nonatomic) NSURL *url;

- (id)description;
- (id)initWithWebModuleConfiguration:(id)a0;
- (void).cxx_destruct;

@end
