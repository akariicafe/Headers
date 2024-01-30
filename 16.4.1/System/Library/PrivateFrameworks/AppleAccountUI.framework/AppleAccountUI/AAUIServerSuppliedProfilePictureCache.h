@class NSMutableDictionary;

@interface AAUIServerSuppliedProfilePictureCache : NSObject {
    NSMutableDictionary *_personIDToEntryMap;
    double _pictureDiameter;
}

@property (readonly, nonatomic) double pictureDiameter;

+ (id)sharedCache;

- (id)profilePictureForPersonID:(id)a0 diameter:(double)a1 serverFetchBlock:(id /* block */)a2;
- (void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)a0;
- (BOOL)updateProfilePicture:(id)a0 didReceiveNewPicture:(BOOL)a1 serverCacheTag:(id)a2 forPersonID:(id)a3;
- (void)profilePictureForPersonID:(id)a0 diameter:(double)a1 completion:(id /* block */)a2;
- (id)init;
- (void).cxx_destruct;

@end
