@class NSString, GEOPDPlace, NSDate, GEOPDReview;

@interface _GEOPlaceDataReview : NSObject <GEOMapItemReview> {
    GEOPDPlace *_placeData;
    GEOPDReview *_review;
}

@property (readonly, nonatomic, getter=_score) double score;
@property (readonly, nonatomic, getter=_maxScore) double maxScore;
@property (readonly, nonatomic, getter=_normalizedScore) double normalizedScore;
@property (readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property (readonly, nonatomic, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property (readonly, nonatomic, getter=_reviewerImageURLString) NSString *reviewerImageURLString;
@property (readonly, nonatomic, getter=_identifier) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPlaceData:(id)a0 review:(id)a1;

@end
