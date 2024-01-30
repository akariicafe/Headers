@class NSString;

@interface PromotedContent.JourneyMetricsHelper : NSObject <APPCCarouselMetricsHelping, APPCJourneyMetricsHelping, APPCMetricRegister> {
    void /* unknown type, empty encoding */ promotedContentIdentifier;
    void /* unknown type, empty encoding */ journeyIdentifier;
    void /* unknown type, empty encoding */ contextIdentifier;
    void /* unknown type, empty encoding */ notificationOwner;
    void /* unknown type, empty encoding */ clientSource;
    void /* unknown type, empty encoding */ interactionThreshold;
    void /* unknown type, empty encoding */ interactionTime;
    void /* unknown type, empty encoding */ viewReady;
    void /* unknown type, empty encoding */ wasCreated;
    void /* unknown type, empty encoding */ hasBeenPlaced;
    void /* unknown type, empty encoding */ stop;
    void /* unknown type, empty encoding */ unfilledReasons;
    void /* unknown type, empty encoding */ placedProperties;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shownSet;
    void /* unknown type, empty encoding */ $__lazy_storage_$_partiallyShownSet;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ promotedContent;
@property (nonatomic, copy) NSString *promotedContentIdentifier;
@property (nonatomic, copy) NSString *journeyIdentifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ primitiveCreator;
@property (nonatomic) void /* unknown type, empty encoding */ hasBeenOnScreen;
@property (nonatomic) void /* unknown type, empty encoding */ isCurrentlyOnScreen;
@property (nonatomic) void /* unknown type, empty encoding */ didImpress;
@property (nonatomic, retain) void /* unknown type, empty encoding */ diagnostics;

- (void)updateElementsShownWithShown:(id)a0 partiallyShown:(id)a1;
- (void)ready;
- (void)loaded;
- (void).cxx_destruct;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)a0;
- (id)init;
- (void)removeHandler;
- (void)delivered;
- (void)dealloc;
- (void)unloaded;
- (void)discardedWithCode:(long long)a0;
- (void)notConsumedWithCode:(long long)a0 placeholder:(BOOL)a1;
- (void)createdWithAdType:(long long)a0;
- (void)replacedWithHelper:(id)a0;
- (void)placedWithPlacementType:(long long)a0;
- (void)placedWithPlacementType:(long long)a0 wasNativeSlot:(BOOL)a1;
- (void)onScreenWithCollapsed:(BOOL)a0;
- (void)visibleWithPercent:(long long)a0 starting:(id)a1 duration:(double)a2 collapsed:(BOOL)a3;
- (void)visibleWithPercent:(long long)a0 starting:(id)a1 duration:(double)a2 scrollVelocity:(float)a3 collapsed:(BOOL)a4;
- (void)offScreenWithCollapsed:(BOOL)a0;
- (void)interacted;
- (void)interactedAtXPos:(float)a0 yPos:(float)a1;
- (void)interactedWithElementID:(unsigned char)a0 atXPos:(float)a1 yPos:(float)a2;
- (void)userReturnedFromInteraction;
- (void)adMarkerInteracted;
- (void)getAppWithButtonState:(long long)a0 timeToPreviousInstall:(long long)a1;
- (void)exceededContainer;
- (void)contentLoadFailure;
- (void)adDidImpress;
- (void)addUnfilledReason:(long long)a0;

@end
