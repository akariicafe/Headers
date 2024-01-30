@class NSObject, NSXPCConnection;
@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    id<INIntentPreferencesAndVocabularyUpdateService> _remoteObjectProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;

- (void)_clearConnection;
- (id)_connection;
- (id)_syncService;
- (id)settingsService;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
