@protocol SSScreenshotAssetManagerBackend;

@interface SSScreenshotAssetManager : NSObject {
    id<SSScreenshotAssetManagerBackend> _backend;
}

+ (id)sharedAssetManager;

- (void).cxx_destruct;
- (void)setBackend:(id)a0;
- (id)backend;
- (void)resetBackend;
- (void)registerImageForPersistable:(id)a0 options:(id)a1 withRegistrationBlock:(id /* block */)a2;
- (void)imageWithPreviouslyRegisteredIdentifier:(id)a0 withAccessBlock:(id /* block */)a1;
- (void)recordEditsToPersistable:(id)a0 inTransition:(BOOL)a1 withCompletionBlock:(id /* block */)a2;
- (void)recordPersistableToTemporaryLocation:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)removePersistable:(id)a0 deleteOptions:(unsigned long long)a1 withCompletionBlock:(id /* block */)a2;
- (void)recordEditsToPersistableForPDF:(id)a0 withCompletionBlock:(id /* block */)a1;

@end
