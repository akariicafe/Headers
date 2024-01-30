@class NSString, NSData, NSDate, CPLSuggestionRecordList;

@interface CPLSuggestionChange : CPLRecordChange

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) unsigned short type;
@property (nonatomic) unsigned short subtype;
@property (copy, nonatomic) CPLSuggestionRecordList *recordList;
@property (copy, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned short notificationState;
@property (nonatomic) unsigned short state;
@property (nonatomic) long long version;
@property (copy, nonatomic) NSDate *activationDate;
@property (copy, nonatomic) NSDate *relevantUntilDate;
@property (copy, nonatomic) NSDate *expungeDate;
@property (copy, nonatomic) NSData *actionData;
@property (copy, nonatomic) NSData *featuresData;

+ (BOOL)supportsDirectDeletion;
+ (BOOL)supportsSecureCoding;
+ (id)_createTestSuggestionWithKeyAssets:(id)a0 representativeAssets:(id)a1;
+ (BOOL)supportsDeletion;
+ (BOOL)cplShouldIgnorePropertyForCoding:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)a0;
- (id)propertiesDescription;
- (id)scopedIdentifiersForMapping;
- (id)translateToClientChangeUsingIDMapping:(id)a0 error:(id *)a1;
- (id)translateToCloudChangeUsingIDMapping:(id)a0 error:(id *)a1;

@end
