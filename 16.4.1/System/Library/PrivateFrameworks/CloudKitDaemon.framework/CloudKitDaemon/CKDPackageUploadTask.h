@class NSError, NSString, NSArray, CKPackage, CKDProgressTracker, CKDMMCSItem, NSObject, CKDMMCSRequestOptions, CKDCancelTokenGroup;
@protocol OS_dispatch_group;

@interface CKDPackageUploadTask : NSObject <CKDCancelling>

@property (retain) NSError *error;
@property (readonly, nonatomic) CKPackage *package;
@property (retain, nonatomic) CKDMMCSItem *MMCSManifestItem;
@property (retain, nonatomic) NSArray *MMCSSectionItems;
@property (retain, nonatomic) CKDProgressTracker *progressTracker;
@property (retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;
@property (readonly, nonatomic) long long storageGroupingPolicy;
@property (readonly, nonatomic) long long uploadRank;
@property (readonly, nonatomic) NSString *recordKey;

- (id)activityCreate;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithPackage:(id)a0 trackProgress:(BOOL)a1;

@end
