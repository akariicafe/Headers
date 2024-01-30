@class NSString, GEOMapItemTip, NSURL, NSDate, MKMapItem;
@protocol GEOMapItemReview;

@interface _MKMapItemUserRatingSnippetTip : NSObject <MKMapItemProviderRatingSnippet> {
    MKMapItem *_mapItem;
    GEOMapItemTip *_tip;
}

@property (readonly, nonatomic, getter=_score) double score;
@property (readonly, nonatomic, getter=_maxScore) double maxScore;
@property (readonly, nonatomic, getter=_normalizedScore) double normalizedScore;
@property (readonly, nonatomic, getter=_localizedSnippet) NSString *localizedSnippet;
@property (readonly, nonatomic, getter=_localizedSnippetLocale) NSString *localizedSnippetLocale;
@property (readonly, nonatomic, getter=_date) NSDate *date;
@property (readonly, nonatomic, getter=_reviewerName) NSString *reviewerName;
@property (readonly, nonatomic, getter=_reviewerImageURL) NSURL *reviewerImageURL;
@property (readonly, nonatomic, getter=_geoReview) id<GEOMapItemReview> geoReview;
@property (readonly, nonatomic, getter=_geoMapItemTIp) GEOMapItemTip *geoMapItemTip;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithMapItem:(id)a0 review:(id)a1;
- (void)showWithCompletionHandler:(id /* block */)a0;

@end
