@class NSData, NSString, MKMapItem, NSArray, SFText, SFImage, SFActionItem, MKSearchFoundationBusinessHoursAndDistanceRichText, NSBundle, MKLocationManager, MKSearchFoundationRichText, NSMutableArray;

@interface MKSearchFoundationResult : SFSearchResult <MKLocationManagerObserver> {
    NSArray *_descriptions;
    SFText *_title;
    SFImage *_thumbnail;
    SFActionItem *_action;
}

@property (retain, nonatomic) NSData *mapsData;
@property (retain, nonatomic) MKMapItem *mapItem;
@property (nonatomic) unsigned long long iconSize;
@property (nonatomic) unsigned long long mksfResultType;
@property (retain, nonatomic) NSBundle *bundle;
@property (copy, nonatomic) NSString *bundleID;
@property (retain, nonatomic) MKLocationManager *locationManager;
@property (retain, nonatomic) MKSearchFoundationRichText *secondLineDisplayedText;
@property (retain, nonatomic) MKSearchFoundationBusinessHoursAndDistanceRichText *thirdLineDisplayedText;
@property (retain, nonatomic) MKSearchFoundationRichText *fourthLineDisplayedText;
@property (retain, nonatomic) NSMutableArray *thirdLineText;
@property (nonatomic) BOOL optionSmallerScreen;
@property (retain, nonatomic) id attributionObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styledStringFromStringArray:(id)a0;

- (void)_commonInit;
- (void)locationManagerDidPauseLocationUpdates:(id)a0;
- (id)thumbnail;
- (void).cxx_destruct;
- (void)locationManagerUpdatedLocation:(id)a0;
- (void)locationManagerFailedToUpdateLocation:(id)a0 withError:(id)a1;
- (void)locationManagerDidReset:(id)a0;
- (BOOL)locationManagerShouldPauseLocationUpdates:(id)a0;
- (void)locationManager:(id)a0 didUpdateVehicleHeading:(double)a1 timestamp:(id)a2;
- (void)locationManager:(id)a0 didUpdateVehicleSpeed:(double)a1 timestamp:(id)a2;
- (void)dealloc;
- (void)setThumbnail:(id)a0;
- (id)action;
- (id)_brandURL;
- (BOOL)_isSmallerScreen;
- (id)_defaultRichTextItems;
- (void)setDescriptions:(id)a0;
- (id)_businessCategory;
- (id)_businessReviewText;
- (id)_businessAddress;
- (id)_businessHoursAndDistance;
- (void)_locationApprovalDidChange;
- (id)_appleRatingsDescription;
- (id)initWithMapsData:(id)a0 iconSize:(unsigned long long)a1 bundleID:(id)a2;
- (void)setTitle:(id)a0;
- (void)setAction:(id)a0;
- (id)descriptions;
- (void)locationManagerDidResumeLocationUpdates:(id)a0;
- (id)title;

@end
