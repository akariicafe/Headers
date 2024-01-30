@class NSHashTable, NSString, UIImage, MPCPlayerCommandRequest, MRUMediaSuggestion, MPArtworkCatalog, MRUTVRemoteController, MediaControlsEndpointController;

@interface MRUEndpointMetadataController : NSObject <MediaControlsEndpointControllerDelegate>

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MPCPlayerCommandRequest *quickActionCommandRequest;
@property (retain, nonatomic) UIImage *quickActionCommandImage;
@property (retain, nonatomic) NSString *iconURL;
@property (nonatomic) long long context;
@property (retain, nonatomic) NSString *suggestionContext;
@property (readonly, nonatomic) NSString *quickActionCommandDescription;
@property (readonly, nonatomic) long long quickAction;
@property (readonly, nonatomic) MediaControlsEndpointController *endpointController;
@property (readonly, nonatomic) MRUTVRemoteController *tvRemoteController;
@property (readonly, copy, nonatomic) NSString *routeUID;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isSystemMusicApplication;
@property (copy, nonatomic) NSString *placeholderDeviceIdentifier;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *condensedTitle;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *smallSubtitle;
@property (readonly, copy, nonatomic) NSString *placeholderText;
@property (copy, nonatomic) NSString *undiscoveredPlaceholderText;
@property (nonatomic) BOOL showPlaceholderText;
@property (readonly, nonatomic) UIImage *applicationIcon;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (readonly, nonatomic) BOOL showMediaSuggestions;
@property (readonly, nonatomic) BOOL shouldShowQuickAction;
@property (readonly, nonatomic) UIImage *quickActionImage;
@property (readonly, nonatomic) MRUMediaSuggestion *nowPlayingMediaSuggestion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)destination;
- (void)endpointControllerDidChangeState:(id)a0;
- (void).cxx_destruct;
- (void)removeObserver:(id)a0;
- (void)endpointController:(id)a0 didLoadNewResponse:(id)a1;
- (void)endpointControllerRouteDidUpdate:(id)a0;
- (void)addObserver:(id)a0;
- (void)endpointControllerDidUpdateRoutingAvailability:(id)a0;
- (BOOL)isEndpointDiscovered;
- (void)setApplicationIcon:(id)a0;
- (void)updateAutomaticResponseLoading;
- (void)performQuickAction;
- (id)initWithEndpointController:(id)a0;
- (BOOL)containsOutputDeviceWithRouteUID:(id)a0;
- (id)subtitleComponents;
- (void)trackQuickActionSelected;
- (void)updateShowMediaSuggestions;
- (void)setShowMediaSuggestions:(BOOL)a0;
- (void)updateQuickActionCommandRequest;
- (void)updateApplicationIcon;
- (id)representedBundleIDFromClient:(id)a0;
- (void)resumePlabackWithCompletion:(id /* block */)a0;
- (void)updateMediaSuggestions;

@end
