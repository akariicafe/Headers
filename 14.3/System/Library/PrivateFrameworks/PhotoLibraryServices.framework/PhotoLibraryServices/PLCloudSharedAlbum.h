@class NSDate, NSString, NSURL, PLManagedAsset, NSOrderedSet, NSArray, NSDictionary, NSObject, NSMutableOrderedSet, PLPhotoLibrary, NSNumber;

@interface PLCloudSharedAlbum : PLManagedAlbum <PLCloudSharedAlbumProtocol> {
    BOOL _deleteFromDBOnly;
}

@property (retain, nonatomic) NSOrderedSet *assets;
@property (nonatomic) short cloudAlbumSubtype;
@property (retain, nonatomic) NSNumber *cloudRelationshipState;
@property (retain, nonatomic) NSNumber *cloudRelationshipStateLocal;
@property (retain, nonatomic) NSNumber *isOwned;
@property (retain, nonatomic) NSNumber *hasUnseenContent;
@property (retain, nonatomic) NSNumber *cloudOwnerEmailKey;
@property (nonatomic) BOOL cloudNotificationsEnabled;
@property (retain, nonatomic) NSString *cloudGUID;
@property (retain, nonatomic) NSDictionary *cloudMetadata;
@property (retain, nonatomic) NSString *cloudOwnerFirstName;
@property (retain, nonatomic) NSString *cloudOwnerLastName;
@property (retain, nonatomic) NSString *cloudOwnerFullName;
@property (retain, nonatomic) NSString *cloudOwnerEmail;
@property (retain, nonatomic) NSString *cloudOwnerHashedPersonID;
@property (nonatomic) BOOL cloudOwnerIsWhitelisted;
@property (retain, nonatomic) NSDate *cloudSubscriptionDate;
@property (retain, nonatomic) NSString *publicURL;
@property (retain, nonatomic) NSOrderedSet *invitationRecords;
@property (retain, nonatomic) NSNumber *unseenAssetsCount;
@property unsigned long long unseenAssetsCountIntegerValue;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabled;
@property (retain, nonatomic) NSNumber *cloudPublicURLEnabledLocal;
@property (retain, nonatomic) NSNumber *cloudMultipleContributorsEnabled;
@property (retain, nonatomic) NSNumber *cloudMultipleContributorsEnabledLocal;
@property (retain, nonatomic) NSDate *cloudLastInterestingChangeDate;
@property (retain, nonatomic) NSDate *cloudCreationDate;
@property (retain, nonatomic) NSDate *cloudLastContributionDate;
@property (retain, nonatomic) NSString *cloudPersonID;
@property (readonly) int cloudRelationshipStateValue;
@property (readonly) int cloudRelationshipStateLocalValue;
@property (readonly, retain, nonatomic) NSString *localizedSharedWithLabel;
@property (readonly, retain, nonatomic) NSOrderedSet *cloudAlbumSubscriberRecords;
@property (readonly, retain, nonatomic) NSDate *cloudFirstRecentBatchDate;
@property (readonly, retain, nonatomic) NSMutableOrderedSet *mutableAssets;
@property (readonly, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, retain, nonatomic) NSNumber *kind;
@property (readonly, nonatomic) int kindValue;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, retain, nonatomic) NSObject *posterImage;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic) BOOL isCameraAlbum;
@property (readonly, nonatomic) BOOL isPanoramasAlbum;
@property (readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isStandInAlbum;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property (readonly, nonatomic) BOOL isUserLibraryAlbum;
@property (readonly, nonatomic) BOOL isProjectAlbum;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property (readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property (retain, nonatomic) NSString *importSessionID;
@property (readonly, retain, nonatomic) NSURL *groupURL;
@property (readonly, copy, nonatomic) id /* block */ sortingComparator;
@property (nonatomic) int pendingItemsCount;
@property (nonatomic) int pendingItemsType;
@property (nonatomic) unsigned long long batchSize;
@property (readonly, retain, nonatomic) NSString *uuid;
@property (readonly, retain, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, nonatomic) unsigned long long approximateCount;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, nonatomic) unsigned long long videosCount;
@property (readonly, nonatomic) BOOL isEmpty;
@property (retain, nonatomic) PLManagedAsset *keyAsset;
@property (retain, nonatomic) PLManagedAsset *secondaryKeyAsset;
@property (retain, nonatomic) PLManagedAsset *tertiaryKeyAsset;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, retain, nonatomic) NSDate *startDate;
@property (readonly, retain, nonatomic) NSDate *endDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)entityName;
+ (id)localizedSharedByLabelWithFirstName:(id)a0 lastName:(id)a1 fullName:(id)a2 emailKey:(id)a3 isOwned:(BOOL)a4 allowsEmail:(BOOL)a5 emailAddressManager:(id)a6;
+ (id)cloudSharedAlbumWithObjectID:(id)a0 managedObjectContext:(id)a1;
+ (id)lightweightReimportDirectoryNameWithGUID:(id)a0 cloudPersonID:(id)a1;
+ (id)cloudSharedAlbumWithGUID:(id)a0 inLibrary:(id)a1;
+ (id)cloudOwnerDisplayNameWithFirstName:(id)a0 lastName:(id)a1 fullName:(id)a2 emailKey:(id)a3 includingEmail:(BOOL)a4 allowsEmail:(BOOL)a5 emailAddressManager:(id)a6;
+ (id)allCloudSharedAlbumsInLibrary:(id)a0;

- (id)emailAddressManager;
- (void)delete;
- (void)willSave;
- (void)awakeFromInsert;
- (void)prepareForDeletion;
- (id)cloudOwnerDisplayNameIncludingEmail:(BOOL)a0 allowsEmail:(BOOL)a1;
- (void)persistRecoveryMetadata;
- (id)cloudAlbumSubscriberRecords;
- (void)updateCloudLastContributionDateWithDate:(id)a0;
- (void)deleteFromDatabaseOnly;
- (void)userDeleteSubscriberRecord:(id)a0;
- (void)updateCloudLastInterestingChangeDateWithDate:(id)a0;
- (id)albumDirectoryPath;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)a0;
- (void)getUnseenStartMarkerIndex:(unsigned long long *)a0 count:(unsigned long long *)a1 showsProgress:(BOOL *)a2;
- (void)publishBatchOfOriginalAssetUUIDs:(id)a0 withBatchCommentText:(id)a1 assetsSharingInfos:(id)a2 customExportsInfo:(id)a3 andTrimmedVideoPathInfo:(id)a4 isNewAlbum:(BOOL)a5;
- (id)_expectedKeyAssets:(id)a0;

@end
