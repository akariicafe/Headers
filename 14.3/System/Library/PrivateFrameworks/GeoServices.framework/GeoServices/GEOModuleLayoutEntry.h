@class NSString, NSArray, GEOPDModuleLayoutEntry;

@interface GEOModuleLayoutEntry : NSObject {
    GEOPDModuleLayoutEntry *_moduleLayoutEntry;
}

@property (readonly, nonatomic) NSString *debugName;
@property (readonly, nonatomic) NSArray *modules;

+ (id)moduleLayoutEntryFromArray:(id)a0;

- (void).cxx_destruct;
- (id)initWithModuleLayoutEntry:(id)a0;

@end
