@class TPSTipStatusController, TPSOfflineContentManager, NSDictionary, NSBundle, NSObject, TPSWidgetController, NSMutableArray, TPSNotificationController, TPSMetadata, NSString, TPSExperiment, NSArray, TPSWelcomeInformation;
@protocol OS_dispatch_queue, TPSTipsManagerDelegate;

@interface TPSTipsManager : NSObject <TPSWidgetControllerDelegate, TPSOfflineContentManagerDelegate>

@property (nonatomic) BOOL contextualTipsInactive;
@property (retain, nonatomic) TPSTipStatusController *tipStatusController;
@property (retain, nonatomic) TPSOfflineContentManager *offlineContentManager;
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
@property (retain, nonatomic) TPSWelcomeInformation *welcomeInformation;
@property (weak, nonatomic) id<TPSTipsManagerDelegate> delegate;
@property (retain, nonatomic) TPSNotificationController *notificationController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)rulesVersion;
+ (BOOL)eligibleForHardwareWelcomeNotification;
+ (id)experiment;
+ (id)immediateNotificationIdentifierForType:(unsigned long long)a0;
+ (BOOL)needImmediateNotificationForType:(unsigned long long)a0;
+ (void)removeWelcomeDocumentCache;
+ (void)removeExperimentCache;

- (void)_updateExperimentCache;
- (void)processTipDocumentsDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (id)offlineContentForidentifier:(id)a0;
- (void)contentForVariantIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)initWithTipStatusController:(id)a0;
- (BOOL)hasWidgetTip;
- (BOOL)isPreconditionValidForIdentifier:(id)a0 preconditionDictionary:(id)a1;
- (id)welcomeDocumentFromContentPackage:(id)a0;
- (void)updateOfflineContent;
- (void)processCollectionsMap:(id)a0 collectionRootId:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)finalEligibleContentWithCollections:(id)a0 collectionsMap:(id)a1 collectionDeliveryInfoMap:(id)a2 eligibleTipIdentifiers:(id)a3 eligibleContextualTipIdentifiers:(id)a4 allFullTipsMap:(id)a5 allMiniTipsMap:(id)a6 tipDeliveryInfoMap:(id)a7 deliveryInfoMap:(id)a8 completionHandler:(id /* block */)a9;
- (void)processTips:(id)a0 deliveryInfoMap:(id)a1 completionHandler:(id /* block */)a2;
- (void)removeOfflineContentForIdentifier:(id)a0;
- (void)offlineContentManager:(id)a0 metaDictionary:(id)a1 documentsDictionary:(id)a2;
- (void)contentFromOrigin:(BOOL)a0 contextualEligibility:(BOOL)a1 widgetEligibility:(BOOL)a2 notificationEligibility:(BOOL)a3 preferredNotificationIdentifiers:(id)a4 shouldDeferBlock:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (id)welcomeCollectionName;
- (void)updateSupplementalIdentifiersForIdentifier:(id)a0 fromDictionary:(id)a1;
- (void)updateContentIfOverrideImmediately:(BOOL)a0;
- (void)contentWithMetaDictionary:(id)a0 documents:(id)a1 isRemote:(BOOL)a2 processOfflineContent:(BOOL)a3 contextualEligibility:(BOOL)a4 widgetEligibility:(BOOL)a5 notificationEligibility:(BOOL)a6 preferredNotificationIdentifiers:(id)a7 completionHandler:(id /* block */)a8;
- (BOOL)isContentIdentifierHoldoutCamp:(id)a0;
- (void)_updatePauseStatus:(BOOL)a0;
- (BOOL)widgetController:(id)a0 validForTip:(id)a1 tipDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3;

@end
