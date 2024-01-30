@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface PGPhotoChangeToGraphChangeConverter : NSObject {
    NSMutableDictionary *_entityTranslatorByEntityName;
    NSObject<OS_os_log> *_loggingConnection;
}

- (void).cxx_destruct;
- (void)_registerTranslatorsWithPhotoLibrary:(id)a0;
- (id)graphChangesWithPhotoChange:(id)a0 progressBlock:(id /* block */)a1;
- (id)initWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;

@end
