@class NSString, NSArray, GEOPDAllGuidesLocationsViewResult;

@interface GEOAllGuidesLocationsViewResult : NSObject {
    GEOPDAllGuidesLocationsViewResult *_viewResult;
    NSArray *_mapsResults;
}

@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *sections;

- (void).cxx_destruct;
- (id)initWithAllGuidesLocationsViewResult:(id)a0 mapsResults:(id)a1;

@end
