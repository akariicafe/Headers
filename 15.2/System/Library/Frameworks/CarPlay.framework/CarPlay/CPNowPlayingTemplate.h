@class NAFuture, NSArray, CARObserverHashTable, NSString;

@interface CPNowPlayingTemplate : CPTemplate <CPNowPlayingClientTemplateDelegate>

@property (class, readonly, nonatomic) CPNowPlayingTemplate *sharedTemplate;

@property (retain, nonatomic) CARObserverHashTable *nowPlayingObservers;
@property (retain, nonatomic) NAFuture *templateProviderFuture;
@property (readonly, nonatomic) NSArray *nowPlayingButtons;
@property (nonatomic, getter=isUpNextButtonEnabled) BOOL upNextButtonEnabled;
@property (copy, nonatomic) NSString *upNextTitle;
@property (nonatomic, getter=isAlbumArtistButtonEnabled) BOOL albumArtistButtonEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)sharedTemplate;

- (void)encodeWithCoder:(id)a0;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)setTrailingNavigationBarButtons:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)updateNowPlayingButtons:(id)a0;
- (void)handleActionForControlIdentifier:(id)a0;
- (id)leadingNavigationBarButtons;
- (void)setLeadingNavigationBarButtons:(id)a0;
- (id)trailingNavigationBarButtons;
- (void)upNextButtonTapped;
- (void)albumArtistButtonTapped;
- (id)_updateLowerRegionButtons:(id)a0;
- (void)_updateNowPlayingTemplate;
- (void)handleAction:(long long)a0 forControlIdentifier:(id)a1;

@end
