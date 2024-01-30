@class NSString, NSArray, NSMapTable, GEOPDActionLink;

@interface GEOPlaceExternalActionProvider : NSObject {
    GEOPDActionLink *_actionLink;
    NSMapTable *_attributionMap;
}

@property (readonly, nonatomic) NSString *appAdamId;
@property (readonly, nonatomic) NSArray *supportedIntegrations;

- (void).cxx_destruct;
- (id)initWithActionLink:(id)a0 attributionMap:(id)a1;

@end
