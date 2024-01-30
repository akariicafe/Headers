@class NSMutableDictionary;

@interface AAUIServerSuppliedProfilePictureCache : NSObject {
    NSMutableDictionary *_personIDToEntryMap;
    double _pictureDiameter;
}

@property (readonly, nonatomic) double pictureDiameter;

+ (id)sharedCache;

- (void)_ensureMinimumPictureDiameter_mustBeSynchronized:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)updateProfilePicture:(id)a0 didReceiveNewPicture:(BOOL)a1 serverCacheTag:(id)a2 forPersonID:(id)a3;
- (void)profilePictureForPersonID:(id)a0 diameter:(double)a1 completion:(id /* block */)a2;
- (id)profilePictureForPersonID:(id)a0 diameter:(double)a1 serverFetchBlock:(id /* block */)a2;

@end
