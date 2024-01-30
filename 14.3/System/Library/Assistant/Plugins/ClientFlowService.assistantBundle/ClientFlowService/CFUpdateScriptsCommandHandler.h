@class NSString, CFScriptDownloadManager, NSObject;
@protocol OS_dispatch_queue, CFScripting;

@interface CFUpdateScriptsCommandHandler : SACFClientFlowUpdateScriptsCommand <AFServiceCommand, CFScriptDownloadDelegate>

@property (retain) id<CFScripting> clientScripter;
@property (retain) NSString *scriptsCachePath;
@property unsigned long long scriptsUpdateCount;
@property BOOL scriptUpdateSuccess;
@property (retain) NSObject<OS_dispatch_queue> *updateScriptsQueue;
@property (retain) CFScriptDownloadManager *downloadManager;
@property (copy) id /* block */ updateScriptsCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)performWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (BOOL)_shouldRetryForError:(id)a0;
- (id)cachePath;
- (void)scriptDownloadFailedForScript:(id)a0 error:(id)a1;
- (void)downloadedScript:(id)a0;
- (void)scriptSavedToFilePath:(id)a0 forScript:(id)a1;
- (void)_updateScriptsCompletedForScriptIdentifier:(id)a0 success:(BOOL)a1;
- (void)_updateScriptCacheForScript:(id)a0 completion:(id /* block */)a1;
- (void)_updateScripts:(id)a0 remaningAttempts:(long long)a1;
- (void)_updateScriptCacheForScriptArchiveAtPath:(id)a0 completion:(id /* block */)a1;

@end
