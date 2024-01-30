@class NSString, NSArray, GEOPDScorecardLayout;

@interface GEOPlaceQuestionnaire : NSObject {
    GEOPDScorecardLayout *_scorecardLayout;
}

@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) NSArray *ratingCategories;

- (void).cxx_destruct;
- (id)initWithScorecardLayout:(id)a0;

@end
