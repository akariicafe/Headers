@class IKAppPlaylistBridge, IKDOMDocument, NSArray, NSDate, NSString, IKAppMediaItemBridge, NSDictionary, IKAppContext, _IKPlaceholderAppPlayer, IKJSPlayer, NSNumber;
@protocol IKAppPlayer;

@interface IKAppPlayerBridge : NSObject <IKDOMFeature> {
    _IKPlaceholderAppPlayer *_placeholderAppPlayer;
}

@property (weak, nonatomic) IKJSPlayer *jsPlayer;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) NSNumber *currentMediaItemDuration;
@property (readonly, nonatomic) NSDate *currentMediaItemDate;
@property (readonly, nonatomic) IKAppMediaItemBridge *currentMediaItem;
@property (readonly, nonatomic) IKAppMediaItemBridge *nextMediaItem;
@property (readonly, nonatomic) IKAppMediaItemBridge *previousMediaItem;
@property (retain, nonatomic) IKAppPlaylistBridge *playlist;
@property (retain, nonatomic) IKDOMDocument *overlayDocument;
@property (retain, nonatomic) IKDOMDocument *interactiveOverlayDocument;
@property (nonatomic) BOOL interactiveOverlayDismissable;
@property (readonly, nonatomic) double scanRate;
@property (readonly, nonatomic) NSArray *currentMediaItemAccessLogs;
@property (readonly, nonatomic) NSArray *currentMediaItemErrorLogs;
@property (nonatomic) BOOL muted;
@property (copy, nonatomic) NSDictionary *contextMenuData;
@property (nonatomic) BOOL showsResumeMenu;
@property (copy, nonatomic) NSDictionary *userInfo;
@property (weak, nonatomic) id<IKAppPlayer> appPlayer;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeFeatureJSObjectForFeature:(id)a0;

- (void)setElapsedTime:(double)a0;
- (void)scan:(double)a0;
- (void)previous;
- (void)next;
- (void)cleanup;
- (void).cxx_destruct;
- (void)pause;
- (void)play;
- (void)stop;
- (void)present;
- (id)initWithDOMNode:(id)a0 featureName:(id)a1;
- (void)startObservingEvent:(id)a0 extraInfo:(id)a1;
- (void)changeToMediaAtIndex:(unsigned long long)a0;
- (void)stopObservingEvent:(id)a0;
- (id)initWithAppContext:(id)a0 jsPlayer:(id)a1;
- (void)_evaluateDelegateBlockSync:(id /* block */)a0;
- (void)dispatchEvent:(id)a0 userInfo:(id)a1 completion:(id /* block */)a2;

@end
