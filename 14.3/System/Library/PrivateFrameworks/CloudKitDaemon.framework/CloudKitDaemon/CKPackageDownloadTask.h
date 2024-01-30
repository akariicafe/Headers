@class NSError, NSArray, CKAsset, CKPackage, CKDProgressTracker, CKDMMCSRequestOptions, NSObject, NSIndexSet, CKDCancelTokenGroup;
@protocol OS_dispatch_group;

@interface CKPackageDownloadTask : NSObject <CKDCancelling>

@property (retain) NSError *error;
@property (readonly, nonatomic) CKPackage *package;
@property (retain, nonatomic) CKAsset *manifestAsset;
@property (retain, nonatomic) NSArray *sectionAssets;
@property (retain, nonatomic) id itemIndices;
@property (retain, nonatomic) NSIndexSet *sectionIndices;
@property (retain, nonatomic) CKDProgressTracker *progressTracker;
@property (retain, nonatomic) CKDMMCSRequestOptions *MMCSRequestOptions;
@property (retain, nonatomic) NSObject<OS_dispatch_group> *group;
@property (retain, nonatomic) CKDCancelTokenGroup *cancelTokens;

- (void)cancel;
- (void).cxx_destruct;
- (id)initWithPackage:(id)a0 trackProgress:(BOOL)a1;

@end
