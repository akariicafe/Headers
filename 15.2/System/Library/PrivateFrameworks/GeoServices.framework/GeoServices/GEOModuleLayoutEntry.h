@class NSString, NSArray, GEOPDModuleLayoutEntry;
@protocol GEOModuleConfigurationProvider;

@interface GEOModuleLayoutEntry : NSObject {
    GEOPDModuleLayoutEntry *_moduleLayoutEntry;
    id<GEOModuleConfigurationProvider> _moduleConfigProvider;
}

@property (readonly, nonatomic) NSString *debugName;
@property (readonly, nonatomic) NSArray *modules;

+ (id)moduleLayoutEntryFromArray:(id)a0;

- (id)description;
- (id)initWithModuleLayoutEntry:(id)a0 moduleConfigProvider:(id)a1;
- (void).cxx_destruct;

@end
