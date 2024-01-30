@class NSArray, NSString;
@protocol GEOMapItemVenueContents;

@interface MKPlaceVenueInfoContentsViewController : MKPlaceSectionViewController <MKModuleViewControllerProtocol>

@property (retain, nonatomic) id<GEOMapItemVenueContents> venueContents;
@property (retain, nonatomic) NSArray *labels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isVisibleWithMapItem:(id)a0;
+ (id)venueInfoContentsViewControllerWithMapItem:(id)a0;

- (void).cxx_destruct;
- (id)_labelFont;
- (void)infoCardThemeChanged;
- (id)initWithVenueContents:(id)a0;
- (void)_addPaddingRowToRows:(id)a0;
- (id)labelWithTitle:(id)a0;
- (id)rowWithLeftLabel:(id)a0 rightLabel:(id)a1;
- (void)updateLabelsProperties;
- (void)_contentSizeDidChange;
- (BOOL)_canShowWhileLocked;
- (void)_updateRows;
- (void)viewDidLoad;

@end
