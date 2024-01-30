@class NSURL, GEOPDModuleOptions;

@interface GEOModuleOptions : NSObject {
    GEOPDModuleOptions *_moduleOptions;
}

@property (readonly, nonatomic) NSURL *webContentURL;

- (void).cxx_destruct;
- (id)initWithModuleOptions:(id)a0;

@end
