@class NSArray, NSString, GEOPDGuidesHomeRepeatableSection;

@interface GEOGuidesHomeRepeatableSection : NSObject {
    GEOPDGuidesHomeRepeatableSection *_pdRepeatableSection;
    NSArray *_mapsResults;
}

@property (readonly, nonatomic) NSArray *guideLocations;
@property (readonly, nonatomic) NSArray *curatedGuides;
@property (readonly, nonatomic) NSArray *publishers;
@property (readonly, nonatomic) long long sectionType;
@property (readonly, nonatomic) long long contentType;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithGuidesHomeRepeatableSection:(id)a0 mapsResults:(id)a1;

@end
