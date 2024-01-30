@class NSMutableDictionary, NSObject;
@protocol OS_os_log;

@interface PGPhotoChangeToGraphChangeConverter : NSObject {
    NSMutableDictionary *_entityTranslatorByEntityName;
    NSObject<OS_os_log> *_loggingConnection;
}

- (void).cxx_destruct;
- (id)initWithPhotoLibrary:(id)a0 loggingConnection:(id)a1;
- (void)_registerTranslatorsWithPhotoLibrary:(id)a0;
- (id)graphChangesWithPhotoChange:(id)a0 progressBlock:(id /* block */)a1;

@end
