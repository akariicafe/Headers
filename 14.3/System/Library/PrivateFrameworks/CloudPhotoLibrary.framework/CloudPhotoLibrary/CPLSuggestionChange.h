@class NSString, CPLSuggestionAssetList, NSData, NSDate;

@interface CPLSuggestionChange : CPLRecordChange

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short subtype;
@property (copy, nonatomic) CPLSuggestionAssetList *assetList;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic) unsigned short state;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSDate *activationDate;
@property (copy, nonatomic) NSDate *relevantUntilDate;
@property (copy, nonatomic) NSDate *expungeDate;
@property (copy, nonatomic) NSData *actionData;
@property (copy, nonatomic) NSData *featuresData;

+ (id)_createTestSuggestionWithKeyAssets:(id)a0 representativeAssets:(id)a1;

- (BOOL)supportsDeletion;
- (void).cxx_destruct;
- (BOOL)supportsDirectDeletion;
- (id)propertiesDescription;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)a0;
- (id)scopedIdentifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;

@end
