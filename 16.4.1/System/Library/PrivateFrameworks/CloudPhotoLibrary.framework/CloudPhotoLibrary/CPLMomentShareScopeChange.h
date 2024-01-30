@class NSData, NSString, NSDate;

@interface CPLMomentShareScopeChange : CPLScopeChange

@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSDate *expiryDate;
@property (nonatomic) long long promisedAssetCount;
@property (nonatomic) long long promisedPhotosCount;
@property (nonatomic) long long promisedVideosCount;
@property (copy, nonatomic) NSData *thumbnailImageData;
@property (copy, nonatomic) NSData *previewImageData;
@property (copy, nonatomic) NSString *originatingScopeIdentifier;

- (void).cxx_destruct;
- (void)setMomentShare:(id)a0;
- (id)momentShare;
- (void)setLibraryInfo:(id)a0;
- (void)updateScopeFromScopeChange:(id)a0 direction:(unsigned long long)a1 didHaveChanges:(BOOL *)a2;

@end
