@class NSObject;
@protocol CKVAdminService;

@interface CKVocabularyAdminEventSimulator : NSObject {
    NSObject<CKVAdminService> *_adminService;
    double _timeout;
    BOOL _simulationFinished;
}

- (long long)finish;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithAdminService:(id)a0;
- (id)initWithAdminService:(id)a0 timeout:(double)a1;
- (void)triggerEventSiriSettingsChanged:(id /* block */)a0;
- (void)triggerEventINVocabularyChanged:(id /* block */)a0;
- (void)triggerEventAddressBookChanged:(id /* block */)a0;
- (void)triggerEventLSApplicationChanged:(id /* block */)a0;
- (void)triggerEventHomeKitChanged:(id /* block */)a0;
- (void)triggerEventMediaLibraryChanged:(id /* block */)a0;
- (void)triggerEventSiriLanguageCodeChanged:(id /* block */)a0;
- (void)triggerEventIndexMaintenance:(id /* block */)a0;
- (void)triggerEventMigration:(id /* block */)a0;
- (void)_handleEvent:(unsigned short)a0 completion:(id /* block */)a1;

@end
