@class NSXPCConnection, NSObject;
@protocol OS_dispatch_queue;

@interface PBServerConnection : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *memberQueue;
@property (retain, nonatomic) NSXPCConnection *memberQ_serverConnection;
@property (readonly, nonatomic) NSXPCConnection *serverConnection;

+ (id)defaultConnection;
+ (unsigned long long)beginListeningToPasteboardChangeNotifications;

- (id)init;
- (void).cxx_destruct;
- (id)pasteboardWithName:(id)a0 createIfNeeded:(BOOL)a1 authenticationBlock:(id /* block */)a2 error:(id *)a3;
- (unsigned long long)savePasteboard:(id)a0 dataProviderEndpoint:(id)a1 error:(id *)a2;
- (unsigned int)transparentSlotWithSize:(struct CGSize { double x0; double x1; })a0 error:(id *)a1;
- (id)pasteboardWithName:(id)a0 error:(id *)a1;
- (unsigned long long)deletePersistentPasteboardWithName:(id)a0 error:(id *)a1;
- (id)localGeneralPasteboardWithAuthenticationBlock:(id /* block */)a0 error:(id *)a1;
- (void)getAllPasteboardsWithAuthenticationBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)getAllPasteboardsCompletionBlock:(id /* block */)a0;
- (void)helloCompletionBlock:(id /* block */)a0;
- (void)localGeneralPasteboardCompletionBlock:(id /* block */)a0;
- (void)performJanitorialTasksCompletionBlock:(id /* block */)a0;
- (void)savePasteboard:(id)a0 dataProviderEndpoint:(id)a1 completionBlock:(id /* block */)a2;
- (void)pasteboardWithName:(id)a0 createIfNeeded:(BOOL)a1 completionBlock:(id /* block */)a2;
- (void)localGeneralPasteboardWithAuthenticationBlock:(id /* block */)a0 completionBlock:(id /* block */)a1;
- (void)requestPatternDetectionsFromPasteboardWithName:(id)a0 UUID:(id)a1 authenticationMessage:(id)a2 itemIndex:(unsigned long long)a3 patterns:(id)a4 needValues:(BOOL)a5 completionBlock:(id /* block */)a6;
- (void)pasteboardWithName:(id)a0 completionBlock:(id /* block */)a1;
- (id)localGeneralPasteboard:(id *)a0;
- (void)didPastePasteboard:(id)a0;
- (void)deletePersistentPasteboardWithName:(id)a0 completionBlock:(id /* block */)a1;
- (void)pasteboardWithName:(id)a0 createIfNeeded:(BOOL)a1 authenticationBlock:(id /* block */)a2 completionBlock:(id /* block */)a3;
- (id)pasteboardWithName:(id)a0 createIfNeeded:(BOOL)a1 error:(id *)a2;
- (void)requestItemFromPasteboardWithName:(id)a0 UUID:(id)a1 authenticationMessage:(id)a2 itemIndex:(unsigned long long)a3 typeIdentifier:(id)a4 completionBlock:(id /* block */)a5;
- (id)serverConnection;

@end
