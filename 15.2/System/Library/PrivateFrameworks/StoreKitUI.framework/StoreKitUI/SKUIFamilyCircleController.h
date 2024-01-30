@class NSCache, SKUIClientContext, SSFamilyCircle, NSNumber, FAFamilyCircle;

@interface SKUIFamilyCircleController : NSObject {
    NSCache *_imageCache;
}

@property (retain) NSNumber *lastAccountID;
@property long long reloadPromptStyle;
@property (retain, nonatomic) SKUIClientContext *clientContext;
@property (readonly, nonatomic) BOOL hasLoaded;
@property (readonly, nonatomic) SSFamilyCircle *familyCircle;
@property (readonly, nonatomic) FAFamilyCircle *iCloudFamily;

+ (id)sharedController;

- (void)reloadData;
- (void)_accountStoreDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)profilePictureForFamilyMember:(id)a0;
- (void)_reloadDataWithPromptStyle:(long long)a0;
- (void)_setITunesFamily:(id)a0 error:(id)a1 iCloudFamily:(id)a2 error:(id)a3;
- (void)_setProfilePicture:(id)a0 forMember:(id)a1;

@end
