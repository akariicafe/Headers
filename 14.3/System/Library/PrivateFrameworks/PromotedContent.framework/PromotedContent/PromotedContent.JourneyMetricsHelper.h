@class NSString;

@interface PromotedContent.JourneyMetricsHelper : NSObject <APPCJourneyMetricsHelping, APPCMetricRegister> {
    void /* unknown type, empty encoding */ promotedContentIdentifier;
    void /* unknown type, empty encoding */ journeyIdentifier;
    void /* unknown type, empty encoding */ contextIdentifier;
    void /* unknown type, empty encoding */ isCurrentlyOnScreen;
    void /* unknown type, empty encoding */ notificationOwner;
    void /* unknown type, empty encoding */ interactionThreshold;
    void /* unknown type, empty encoding */ interactionTime;
    void /* unknown type, empty encoding */ viewReady;
    void /* unknown type, empty encoding */ wasCreated;
    void /* unknown type, empty encoding */ hasBeenPlaced;
    void /* unknown type, empty encoding */ stop;
}

@property (nonatomic, weak) void /* unknown type, empty encoding */ promotedContent;
@property (nonatomic, copy) NSString *promotedContentIdentifier;
@property (nonatomic, copy) NSString *journeyIdentifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ primitiveCreator;
@property (nonatomic) void /* unknown type, empty encoding */ hasBeenOnScreen;

- (void)ready;
- (void)loaded;
- (id)init;
- (void).cxx_destruct;
- (void)userReturnedFromInteraction;
- (void)adMarkerInteracted;
- (void)exceededContainer;
- (void)visibleWithPercent:(long long)a0 starting:(id)a1 duration:(double)a2 scrollVelocity:(float)a3 collapsed:(BOOL)a4;
- (void)notConsumedWithCode:(long long)a0 placeholder:(BOOL)a1;
- (void)registerHandlerForAllMetricsWithClosure:(id /* block */)a0;
- (void)removeHandler;
- (void)replacedWithHelper:(id)a0;
- (void)offScreenWithCollapsed:(BOOL)a0;
- (void)onScreenWithCollapsed:(BOOL)a0;
- (void)placedWithPlacementType:(long long)a0 wasNativeSlot:(BOOL)a1;
- (void)interactedAtXPos:(float)a0 yPos:(float)a1;
- (void)contentLoadFailure;
- (void)delivered;
- (void)discardedWithCode:(long long)a0;
- (void)createdWithAdType:(long long)a0;
- (void)getAppWithButtonState:(long long)a0 timeToPreviousInstall:(double)a1;

@end
