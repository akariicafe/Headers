@class NSFileManager;

@interface IMDDonationManager : NSObject

@property (retain, nonatomic) NSFileManager *fileManager;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)copyGroupPhotoToExternalPathIfNecessary:(id)a0 chatGUID:(id)a1 attachmentFilepath:(id)a2;

@end
