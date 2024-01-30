@class NSHashTable, NSString, UIImage, MPCPlayerResponse, MPCPlayerCommandRequest, MRUMediaSuggestionsController, NSDictionary, MPArtworkCatalog, MRUMediaSuggestion, MRUTVRemoteController, MRNowPlayingPlayerResponse, MediaControlsEndpointController;

@interface MRUEndpointMetadataController : NSObject <MediaControlsEndpointControllerDelegate, MRUMediaSuggestionsControllerObserver> {
    unsigned long long _stateHandle;
}

@property (retain, nonatomic) NSHashTable *observers;
@property (retain, nonatomic) MPCPlayerCommandRequest *quickActionCommandRequest;
@property (retain, nonatomic) UIImage *quickActionCommandImage;
@property (retain, nonatomic) NSString *iconURL;
@property (retain, nonatomic) MPArtworkCatalog *nowPlayingPlayerResponseArtworkCatalog;
@property (retain, nonatomic) NSDictionary *keyResponseProperties;
@property (nonatomic) long long context;
@property (retain, nonatomic) NSString *suggestionContext;
@property (retain, nonatomic) MRUMediaSuggestionsController *suggestionsController;
@property (readonly, nonatomic) BOOL showMediaSuggestions;
@property (readonly, nonatomic) MRUMediaSuggestion *nowPlayingMediaSuggestion;
@property (nonatomic) BOOL hideSuggestionsWhileDeviceIsLocked;
@property (readonly, nonatomic) NSString *quickActionCommandDescription;
@property (readonly, nonatomic) long long quickAction;
@property (readonly, nonatomic) BOOL shouldShowQuickAction;
@property (readonly, nonatomic) UIImage *quickActionImage;
@property (retain, nonatomic) MRNowPlayingPlayerResponse *nowPlayingPlayerResponse;
@property (readonly, nonatomic) MediaControlsEndpointController *endpointController;
@property (readonly, nonatomic) MRUTVRemoteController *tvRemoteController;
@property (readonly, copy, nonatomic) NSString *routeUID;
@property (readonly, nonatomic) MPCPlayerResponse *response;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isSystemMusicApplication;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *condensedTitle;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *smallSubtitle;
@property (readonly, copy, nonatomic) NSString *placeholderText;
@property (copy, nonatomic) NSString *undiscoveredPlaceholderText;
@property (readonly, nonatomic) BOOL showPlaceholderText;
@property (readonly, nonatomic) UIImage *applicationIcon;
@property (readonly, nonatomic) UIImage *placeholderImage;
@property (readonly, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setApplicationIcon:(id)a0;
- (id)_fullStateDumpObject;
- (id)initWithEndpointController:(id)a0;
- (BOOL)isEndpointDiscovered;
- (BOOL)containsOutputDeviceWithRouteUID:(id)a0;
- (id)destination;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;
- (void)updateKeyResponsePropertiesForResponse:(id)a0;
- (void)trackQuickActionSelected;
- (void)performQuickAction;
- (void)updateAutomaticResponseLoading;
- (void)updateShowMediaSuggestions;
- (void).cxx_destruct;
- (void)endpointController:(id)a0 didLoadNewResponse:(id)a1;
- (void)resumePlabackWithCompletion:(id /* block */)a0;
- (void)endpointControllerDidUpdateRoutingAvailability:(id)a0;
- (BOOL)hasNowPlayingInfo;
- (id)subtitleComponentsWithCondensed:(BOOL)a0;
- (void)updateApplicationIcon;
- (void)setShowMediaSuggestions:(BOOL)a0;
- (void)dealloc;
- (id)keyPropertiesForResponse:(id)a0;
- (void)endpointControllerRouteDidUpdate:(id)a0;
- (void)mediaSuggestionsController:(id)a0 didUpdateSuggestions:(id)a1;
- (void)updateQuickActionCommandRequest;
- (void)endpointControllerDidChangeState:(id)a0;

@end
