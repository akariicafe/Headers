@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface ICNotesImporterClient : NSObject {
    NSXPCConnection *_connectionToService;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestCountQueue;
@property (nonatomic) unsigned long long requestCount;

- (id)init;
- (void).cxx_destruct;
- (void)archiveEvernoteNotesFromBookmarkData:(id)a0 completionBlock:(id /* block */)a1;
- (void)cleanupArchiveId:(id)a0 completionBlock:(id /* block */)a1;
- (void)countEvernoteNotesFromBookmarkData:(id)a0 completionBlock:(id /* block */)a1;
- (void)parseHTMLStringFromEvernoteContentString:(id)a0 completionBlock:(id /* block */)a1;
- (void)parseTitleFromHTMLString:(id)a0 completionBlock:(id /* block */)a1;
- (void)resumeConnectionIfNeeded;
- (void)suspendConnectionIfNeeded;
- (void)unarchiveEvernoteNoteFromArchiveId:(id)a0 noteArchiveId:(id)a1 completionBlock:(id /* block */)a2;
- (void)unarchiveEvernoteResourceFromArchiveId:(id)a0 resourceArchiveId:(id)a1 completionBlock:(id /* block */)a2;

@end
