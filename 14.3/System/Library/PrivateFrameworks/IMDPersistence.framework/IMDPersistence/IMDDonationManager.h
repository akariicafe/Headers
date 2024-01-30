@class NSFileManager;

@interface IMDDonationManager : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)copyGroupPhotoToExternalPathIfNecessary:(id)a0 chatGUID:(id)a1 attachmentFilepath:(id)a2;

@end
