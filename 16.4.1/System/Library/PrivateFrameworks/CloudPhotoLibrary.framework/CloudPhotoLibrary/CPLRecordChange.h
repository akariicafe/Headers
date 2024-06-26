@class NSData, NSString, NSArray, NSDate, CPLRecordPushContext, CPLScopedIdentifier, CPLRecordChangeDiffTracker;

@interface CPLRecordChange : NSObject <NSSecureCoding, NSCopying> {
    CPLRecordChangeDiffTracker *_attachedDiffTracker;
    CPLRecordPushContext *_pushContext;
    BOOL _shouldNotTrustCloudCache;
    BOOL _shouldFilterDefaultValuesForNewProperties;
    BOOL _isSparseFullChange;
    BOOL _shouldOnlyUploadNewResources;
    BOOL _relatedRecordShouldBeShared;
    CPLRecordChange *_ignoredRecord;
    BOOL _didCacheRealResourceSizeInStorage;
    unsigned long long _cachedRealResourceSizeInStorage;
}

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) Class relatedRecordClass;
@property (class, readonly, nonatomic) BOOL isContributorsUpdateSupported;

@property (copy, nonatomic) NSString *realIdentifier;
@property (copy, nonatomic) NSData *recordChangeData;
@property (copy, nonatomic) NSData *sharingRecordChangeData;
@property (nonatomic) BOOL serverRecordIsCorrupted;
@property (copy, nonatomic) NSString *sharingRecordIdentifier;
@property (copy, nonatomic) CPLScopedIdentifier *scopedIdentifier;
@property (copy, nonatomic) NSDate *recordModificationDate;
@property (nonatomic) unsigned long long changeType;
@property (copy, nonatomic) NSDate *dateDeleted;
@property (copy, nonatomic) CPLScopedIdentifier *resourceCopyFromScopedIdentifier;
@property (nonatomic) BOOL inTrash;
@property (nonatomic) BOOL inExpunged;
@property (copy, nonatomic) NSString *sharingScopeIdentifier;
@property (copy, nonatomic) NSArray *sharingContributorUserIdentifiers;
@property (copy, nonatomic) NSArray *updateSharingContributorUserIdentifiers;
@property (copy, nonatomic) NSString *identifier;

+ (BOOL)supportsDirectDeletion;
+ (BOOL)supportsDeletion;
+ (BOOL)supportsResources;
+ (BOOL)supportsSharing;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)a0;
+ (long long)maxInlineDataSize;
+ (id)newChangeWithScopedIdentifier:(id)a0 changeType:(unsigned long long)a1;
+ (id)newDeleteChangeWithScopedIdentifier:(id)a0;
+ (id)newRecordWithScopedIdentifier:(id)a0;
+ (id)newRecordInScopeWithIdentifier:(id)a0;
+ (BOOL)supportsSharingScopedIdentifier;
+ (id)_descriptionForChangeType:(unsigned long long)a0 isSparseFullChange:(BOOL)a1 onlyUploadNewResources:(BOOL)a2;
+ (Class)classForStoredClassName:(id)a0 forCPLArchiver:(id)a1;
+ (id /* block */)copyPropertyBlockForDirection:(unsigned long long)a0;
+ (id)cplAdditionalSecureClassesForProperty:(id)a0;
+ (BOOL)cplShouldIgnorePropertyForEquality:(id)a0;
+ (id)descriptionForChangeType:(unsigned long long)a0;
+ (id)descriptionForDirection:(unsigned long long)a0;
+ (id /* block */)equalityBlockForDirection:(unsigned long long)a0;
+ (id)newChangeWithIdentifier:(id)a0 changeType:(unsigned long long)a1;
+ (id)newChangeWithType:(unsigned long long)a0;
+ (id)newDeleteChangeWithIdentifier:(id)a0;
+ (id)newRecord;
+ (id)newRecordWithIdentifier:(id)a0;
+ (BOOL)shouldReallyQuarantineRecord;

- (void)encodeWithCoder:(id)a0;
- (void)applyChange:(id)a0;
- (BOOL)supportsDirectDeletion;
- (BOOL)isDelete;
- (void)setResources:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)cplFullDescription;
- (id)redactedDescription;
- (id)initWithCPLArchiver:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)supportsDeletion;
- (BOOL)isEqual:(id)a0;
- (void)setScopeIndex:(long long)a0;
- (unsigned long long)hash;
- (id)resources;
- (id)description;
- (BOOL)supportsResources;
- (BOOL)supportsSharing;
- (void).cxx_destruct;
- (void)clearIdentifiers;
- (id)secondaryIdentifier;
- (BOOL)hasChangeType:(unsigned long long)a0;
- (BOOL)isFullRecord;
- (unsigned long long)realResourceSize;
- (Class)recordClass;
- (id)copyChangeType:(unsigned long long)a0;
- (id)resourcePerType;
- (BOOL)supportsSharingScopedIdentifier;
- (BOOL)_canLowerQuota;
- (id)_ignoredRecord;
- (void)_noteRelatedRecordShouldBeShared;
- (id)_pushContext;
- (BOOL)_relatedRecordShouldBeShared;
- (void)_setIgnoredRecord:(id)a0;
- (void)_setPushContext:(id)a0;
- (void)_setShouldNotTrustCloudCache:(BOOL)a0;
- (BOOL)_shouldNotTrustCloudCache;
- (id)_unscopedIdentifier;
- (id)allRelatedScopedIdentifiers;
- (BOOL)allResourcesAreAvailable;
- (BOOL)allowsToOnlyUploadNewResources;
- (BOOL)applyChange:(id)a0 copyPropertiesToFinalChange:(id)a1 forChangeType:(unsigned long long)a2 direction:(unsigned long long)a3 diffTracker:(id)a4;
- (void)applyChangeType:(unsigned long long)a0 fromChange:(id)a1;
- (id)asRecordView;
- (void)attachDiffTracker:(id)a0;
- (id)attachedDiffTracker;
- (void)awakeFromStorage;
- (unsigned long long)baseDerivativeResourceType;
- (unsigned long long)baseVideoComplemenentResourceType;
- (BOOL)changeIsOnlyAddingResourcesToRecord:(id)a0 addedResources:(id *)a1;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)a0;
- (void)clearChangeType:(unsigned long long)a0;
- (id)compactedChangeWithRelatedChanges:(id)a0 isOnlyChange:(BOOL)a1 fullRecord:(id)a2 usingStorageView:(id)a3;
- (void)copyDerivatives:(unsigned long long *)a0 count:(int)a1 avoidResourceType:(unsigned long long)a2 fromRecord:(id)a3 inResourcePerType:(id)a4;
- (void)copyDerivativesFromRecordIfPossible:(id)a0;
- (long long)dequeueOrder;
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)a0;
- (void)enumerateChangeTypesForChangeType:(unsigned long long)a0 block:(id /* block */)a1;
- (unsigned long long)estimatedRecordSize;
- (unsigned long long)fullChangeTypeForFullRecord;
- (BOOL)isAssetChange;
- (BOOL)isInScopeWithIdentifier:(id)a0;
- (BOOL)isMasterChange;
- (BOOL)isResourceTypeAGeneratedDerivative:(unsigned long long)a0;
- (BOOL)isScopeChange;
- (BOOL)isSharedInScopeWithIdentifier:(id)a0;
- (BOOL)isSparseFullChange;
- (void)markAsSparseFullChange;
- (void)markToOnlyUploadNewResources;
- (id)mergeRecordChangeWithNewRecordChange:(id)a0 direction:(unsigned long long)a1;
- (id)onlyAddedResources;
- (unsigned long long)originalResourceSize;
- (void)prepareForStorage;
- (id)propertiesDescription;
- (id)propertiesForChangeType:(unsigned long long)a0;
- (id)proposedCloudScopedIdentifierWithError:(id *)a0;
- (id)proposedLocalScopedIdentifier;
- (id)realRecordChangeFromRecordChange:(id)a0 direction:(unsigned long long)a1 newRecord:(id *)a2;
- (id)realRecordChangeFromRecordChange:(id)a0 direction:(unsigned long long)a1 newRecord:(id *)a2 changeType:(unsigned long long)a3 diffTracker:(id)a4;
- (id)realRecordChangeFromRecordChange:(id)a0 direction:(unsigned long long)a1 newRecord:(id *)a2 diffTracker:(id)a3;
- (id)realScopedIdentifier;
- (unsigned long long)realUploadResourceSize;
- (id)relatedIdentifier;
- (Class)relatedRecordClass;
- (id)relatedScopedIdentifier;
- (BOOL)resourceChangeWillOnlyChangeDerivatives:(id)a0;
- (id)resourceForType:(unsigned long long)a0;
- (id)resourcesDescription;
- (void)restoreRelationShipsFromFullRecord:(id)a0;
- (id)scopedIdentifiersForMapping;
- (id)secondaryScopedIdentifier;
- (void)setRelatedIdentifier:(id)a0;
- (void)setSecondaryIdentifier:(id)a0;
- (void)setSharingRecordScopedIdentifier:(id)a0;
- (void)setShouldFilterDefaultValuesForNewProperties:(BOOL)a0;
- (id)sharingRecordScopedIdentifier;
- (BOOL)shouldApplyPropertiesWithSelector:(SEL)a0;
- (BOOL)shouldFilterDefaultValuesForNewProperties;
- (BOOL)shouldOnlyUploadNewResources;
- (id)storedClassNameForCPLArchiver:(id)a0;
- (unsigned long long)supportedChangeTypes;
- (BOOL)supportsResourceType:(unsigned long long)a0;
- (unsigned long long)totalResourceSize;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (void)updateScopeIdentifier:(id)a0;
- (BOOL)validateChangeWithError:(id *)a0;
- (BOOL)validateFullRecord;
- (BOOL)validateRecordForTracker:(id)a0;

@end
