@class TPSWidgetController, NSString, NSArray, TPSMetadata, NSDictionary, TPSNotificationController, TPSTipStatusController, TPSExperiment, NSMutableArray, NSObject, NSBundle;
@protocol OS_dispatch_queue, TPSTipsManagerDelegate;

@interface TPSTipsManager : NSObject <TPSWidgetControllerDelegate>

@property (nonatomic) BOOL contextualTipsInactive;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue;
@property (retain, nonatomic) NSMutableArray *sessionItems;
@property (retain, nonatomic) TPSMetadata *metadata;
@property (retain, nonatomic) NSArray *collections;
@property (retain, nonatomic) NSArray *tips;
@property (retain, nonatomic) NSDictionary *collectionsMap;
@property (retain, nonatomic) NSDictionary *tipsMap;
@property (copy, nonatomic) TPSExperiment *experiment;
@property (copy, nonatomic) NSString *rulesVersion;
@property (retain, nonatomic) NSBundle *frameworkBundle;
@property (retain, nonatomic) TPSWidgetController *widgetController;
@property (weak, nonatomic) id<TPSTipsManagerDelegate> delegate;
@property (retain, nonatomic) TPSNotificationController *notificationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)immediateNotificationIdentifierForType:(unsigned long long)a0;
+ (BOOL)needImmediateNotificationForType:(unsigned long long)a0;
+ (BOOL)eligibleForHardwareWelcomeNotification;

- (id)initWithTipStatusController:(id)a0;
- (void).cxx_destruct;
- (BOOL)isPreconditionValidForIdentifier:(id)a0 preconditionDictionary:(id)a1;
- (void)processCollectionsMap:(id)a0 collectionRootId:(id)a1 completionHandler:(id /* block */)a2;
- (void)clearWelcomeDoumentCacheWithMajorVersion:(id)a0;
- (void)contentForIdentifier:(id)a0 variantIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)contentFromOrigin:(BOOL)a0 contextualEligibility:(BOOL)a1 widgetEligibility:(BOOL)a2 notificationEligibility:(BOOL)a3 preferredNotificationIdentifier:(id)a4 shouldDeferBlock:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (void)processTips:(id)a0 deliveryInfoMap:(id)a1 completionHandler:(id /* block */)a2;
- (void)processTipContentsFeedFromURLRequest:(id)a0 attributionIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)_localFormattedDataForURL:(id)a0;
- (BOOL)hasWidgetTip;
- (void)processTipContentsFeedFromOrigin:(BOOL)a0 completionHandler:(id /* block */)a1;
- (BOOL)isHoldoutCamp;
- (id)_localContentURL;
- (void)finalEligibleContentWithCollections:(id)a0 collectionsMap:(id)a1 collectionDeliveryInfoMap:(id)a2 eligibleTipIdentifiers:(id)a3 eligibleContextualTipIdentifiers:(id)a4 allFullTipsMap:(id)a5 allMiniTipsMap:(id)a6 tipDeliveryInfoMap:(id)a7 deliveryInfoMap:(id)a8 completionHandler:(id /* block */)a9;
- (id)_localMetaURL;
- (void)_updateExperimentCache;
- (BOOL)widgetController:(id)a0 validForTip:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3;
- (BOOL)_shouldProcessLocalContent;
- (id)_localContentFormattedData;
- (id)_frameworkBundle;
- (void)_updatePauseStatus:(BOOL)a0;
- (id)_localMetaFormattedData;
- (id)localizedStringForKey:(id)a0 localizedStringsFileName:(id)a1;
- (id)welcomeDocumentFromContentPackage:(id)a0;
- (void)updateContentIfOverrideImmediately:(BOOL)a0;
- (id)_localContentURLForIdentifier:(id)a0;

@end
