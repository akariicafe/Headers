@class NSString, NSData, NSDate, CPLMemoryAssetList;

@interface CPLMemoryChange : CPLRecordChange

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) long long category;
@property (nonatomic) long long subcategory;
@property (copy, nonatomic) CPLMemoryAssetList *assetList;
@property (copy, nonatomic) NSData *assetListPredicate;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSData *graphData;
@property (nonatomic) long long graphVersion;
@property (nonatomic, getter=isFavorite) BOOL favorite;
@property (nonatomic, getter=isRejected) BOOL rejected;
@property (nonatomic) long long userActionOptions;
@property (copy, nonatomic) NSData *movieData;
@property (nonatomic) double score;
@property (nonatomic) long long notificationState;
@property (copy, nonatomic) NSData *blacklistedFeature;
@property (nonatomic) long long playCount;
@property (nonatomic) long long shareCount;
@property (nonatomic) long long viewCount;

+ (BOOL)supportsSecureCoding;
+ (id)_createTestMemoryWithAssets:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)supportsDeletion;
- (BOOL)supportsDirectDeletion;
- (id)propertiesDescription;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)a0;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;

@end
