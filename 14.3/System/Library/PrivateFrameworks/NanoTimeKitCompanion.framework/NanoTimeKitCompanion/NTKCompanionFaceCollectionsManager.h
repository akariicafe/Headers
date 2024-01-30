@class NSUUID, NSMutableDictionary;

@interface NTKCompanionFaceCollectionsManager : NSObject {
    NSUUID *_activeDeviceUUID;
    NSMutableDictionary *_faceCollectionsForCollectionIdentifier;
    int _pairedDeviceVersionChangeNotificationToken;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)sharedFaceCollectionForDevice:(id)a0 forCollectionIdentifier:(id)a1;
- (id)sharedLibraryFaceCollectionsForAllDevices;

@end
