@class NSObject, NSMutableDictionary, NSMutableArray;
@protocol OS_dispatch_queue;

@interface STAceRecorder : NSObject <STAceObjectHandler> {
    NSMutableDictionary *_timestampToAceObjs;
    NSMutableArray *_speechLogs;
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_startRecording;
- (void)_finishRecording;
- (void)handleClientCommand:(id)a0;
- (void)handleServerCommand:(id)a0;
- (BOOL)_createDirectoryIfNeededWithBaseURL:(id)a0;
- (id)_libraryURLWithBaseURL:(id)a0 date:(id)a1 fileName:(id)a2;

@end
