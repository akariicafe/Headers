@class _PASLock, _PASNotificationToken;

@interface PPNamedEntityToTopicMapping : NSObject {
    _PASLock *_lock;
    _PASNotificationToken *_assetUpdateNotificationToken;
}

+ (id)sharedInstance;
+ (id)currentTrieSha256;
+ (id)_filesystemAssetPath;

- (BOOL)_loadAssetData;
- (id)init;
- (void).cxx_destruct;
- (id)mappedTopicForEntity:(id)a0;

@end
