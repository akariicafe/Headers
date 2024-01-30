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

+ (id)experiment;
+ (BOOL)eligibleForHardwareWelcomeNotification;
+ (void)removeWelcomeDocumentCache;
+ (id)immediateNotificationIdentifierForType:(unsigned long long)a0;
+ (void)removeWidgetUpdateDate;
+ (BOOL)supportsFeaturedCollection;
+ (BOOL)needImmediateNotificationForType:(unsigned long long)a0;
+ (void)removeExperimentCache;
+ (id)rulesVersion;

- (void)_updateExperimentCache;
- (void)updateOfflineContent;
- (void)updateDocumentContent:(id)a0 withClientConditions:(id)a1 usingDictionary:(id)a2;
- (void)contentWithMetaDictionary:(id)a0 documents:(id)a1 isRemote:(BOOL)a2 processOfflineContent:(BOOL)a3 contextualEligibility:(BOOL)a4 widgetEligibility:(BOOL)a5 notificationEligibility:(BOOL)a6 preferredNotificationIdentifiers:(id)a7 completionHandler:(id /* block */)a8;
- (BOOL)widgetController:(id)a0 validForDocument:(id)a1 documentDeliveryInfoMap:(id)a2 deliveryInfoMap:(id)a3;
- (BOOL)shouldPerformWidgetUpdate;
- (id)offlineContentForidentifier:(id)a0;
- (id)initWithTipStatusController:(id)a0;
- (void)processTips:(id)a0 deliveryInfoMap:(id)a1 targetingCache:(id)a2 completionHandler:(id /* block */)a3;
- (void)removeOfflineContentForIdentifier:(id)a0;
- (id)collectionSectionsWithEligibleCollectionSections:(id)a0 collectionSectionMap:(id)a1 featuredCollection:(id)a2;
- (id)processSavedTips:(id)a0;
- (void)_updatePauseStatus:(BOOL)a0;
- (void)processCollection:(id)a0 collectionsMap:(id)a1 ignoreSection:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)featureCollectionFromCollectionMap:(id)a0 collectionOrder:(id)a1;
- (void)updateContentIfOverrideImmediately:(BOOL)a0;
- (id)collectionSectionsFromCollectionMap:(id)a0 exclude:(id)a1;
- (void)contentForVariantIdentifiers:(id)a0 completionHandler:(id /* block */)a1;
- (id)welcomeDocumentFromContentPackage:(id)a0;
- (id)collectionSectionMapWithCollections:(id)a0 availableCollectionSections:(id)a1 collectionIdToCollectionLabelMap:(id)a2;
- (void)processTipDocumentsDictionary:(id)a0 completionHandler:(id /* block */)a1;
- (id)collectionStatusForCollection:(id)a0;
- (void)offlineContentManager:(id)a0 metaDictionary:(id)a1 documentsDictionary:(id)a2;
- (void)finalEligibleContentWithCollections:(id)a0 collectionsMap:(id)a1 collectionDeliveryInfoMap:(id)a2 eligibleTipIdentifiers:(id)a3 eligibleContextualTipIdentifiers:(id)a4 allFullTipsMap:(id)a5 allMiniTipsMap:(id)a6 tipDeliveryInfoMap:(id)a7 deliveryInfoMap:(id)a8 completionHandler:(id /* block */)a9;
- (id)welcomeCollectionName;
- (BOOL)isPreconditionValidForIdentifier:(id)a0 preconditionDictionary:(id)a1;
- (void)processClientConditions:(id)a0 targetingCache:(id)a1 completionHandler:(id /* block */)a2;
- (void).cxx_destruct;
- (void)updateSupplementalIdentifiersForIdentifier:(id)a0 fromDictionary:(id)a1;
- (BOOL)isContentIdentifierHoldoutCamp:(id)a0;
- (void)contentFromOrigin:(BOOL)a0 contextualEligibility:(BOOL)a1 widgetEligibility:(BOOL)a2 notificationEligibility:(BOOL)a3 preferredNotificationIdentifiers:(id)a4 shouldDeferBlock:(id /* block */)a5 completionHandler:(id /* block */)a6;
- (BOOL)hasWidgetDocument;

@end
