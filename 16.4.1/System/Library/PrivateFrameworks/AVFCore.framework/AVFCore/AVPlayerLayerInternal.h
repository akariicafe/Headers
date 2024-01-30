@class AVPlayer, AVNetworkPlaybackPerfHUDLayer, NSString, FigVideoContainerLayer, FigSubtitleCALayer, CALayer, NSDictionary, AVSinkSubscriber, AVKeyPathDependencyManager, NSObject, AVPlayerLayer, FigBaseCALayer;
@protocol OS_dispatch_queue;

@interface AVPlayerLayerInternal : NSObject {
    AVNetworkPlaybackPerfHUDLayer *hudLayer;
    NSObject<OS_dispatch_queue> *serialQueue;
    BOOL isPresentationLayer;
    struct OpaqueFigSimpleMutex { } *isReadyForDisplayMutex;
    NSObject<OS_dispatch_queue> *configurationQueue;
    AVKeyPathDependencyManager *dependencyManager;
    id playerItemHasEnqueuedVideoFrameListener;
    id windowSceneDidEnterBackgroundListener;
    id windowSceneWillEnterForegroundListener;
    AVPlayer *player;
    NSString *videoGravity;
    NSDictionary *pixelBufferAttributes;
    BOOL lanczosDownscalingEnabled;
    long long lanczosDownscalingFactor;
    FigBaseCALayer *maskLayer;
    FigVideoContainerLayer *videoLayer;
    FigSubtitleCALayer *subtitleLayer;
    FigBaseCALayer *closedCaptionLayer;
    AVPlayerLayer *interstitialLayer;
    BOOL isLegibleDisplayEnabled;
    BOOL isForScrubbingOnly;
    AVPlayerLayer *associatedRemoteModeLayer;
    BOOL willManageSublayersAsSwappedLayers;
    long long activeMode;
    BOOL isPartOfForegroundScene;
    BOOL showInterstitialInstead;
    BOOL isReadyForDisplay;
    AVPlayer *playerBeingObserved;
    struct CGSize { double width; double height; } latestAppliedPresentationSize;
    BOOL preventsChangesToSublayerHierarchy;
    NSDictionary *clientLayers;
    BOOL isPIPModeEnabled;
    CALayer *placeholderContentLayerDuringPIPMode;
    BOOL isConnectedToSecondScreen;
    struct NSEdgeInsets { double top; double left; double bottom; double right; } legibleContentInsets;
    BOOL honorContentScale;
    double screenScale;
    int lastWindowSceneEvent;
    BOOL isVisible;
    AVSinkSubscriber *playerCurrentItemSink;
    AVSinkSubscriber *currentItemPresentationSizeSink;
    AVSinkSubscriber *currentItemTracksSink;
    AVSinkSubscriber *currentItemNonForcedSubtitlesEnabledSink;
    AVSinkSubscriber *playerIsDisplayingClosedCaptionsSink;
}

@end
