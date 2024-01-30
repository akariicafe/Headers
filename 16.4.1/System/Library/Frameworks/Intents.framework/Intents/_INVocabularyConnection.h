@class NSObject, NSXPCConnection;
@protocol INIntentPreferencesAndVocabularyUpdateService, OS_dispatch_queue;

@interface _INVocabularyConnection : NSObject {
    NSXPCConnection *_connection;
    id<INIntentPreferencesAndVocabularyUpdateService> _remoteObjectProxy;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (void)initialize;

- (void)dealloc;
- (void)_clearConnection;
- (id)init;
- (id)_connection;
- (void).cxx_destruct;
- (id)settingsService;
- (id)_syncService;

@end
