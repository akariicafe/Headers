@class NSString, NSProgress, NSXPCConnection, ML3ClientImportSessionConfiguration;
@protocol ML3ClientImportSessionDelegate;

@interface ML3ClientImportSession : NSObject <ML3ClientImportSessionXPCInterface> {
    NSXPCConnection *_xpcClientConnection;
    id<ML3ClientImportSessionDelegate> _delegate;
    ML3ClientImportSessionConfiguration *_sessionConfiguration;
    BOOL _hasActiveSession;
}

@property (readonly, nonatomic) NSProgress *progress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)cancel;
- (BOOL)finish;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0 delegate:(id)a1;
- (BOOL)addItems:(id)a0;
- (id)_xpcClientConnection;
- (BOOL)removeItems:(id)a0;
- (BOOL)start;
- (BOOL)updateItems:(id)a0;
- (id)addItemsReturningResult:(id)a0;
- (id)updateItemsReturningResult:(id)a0;
- (id)removeItemsReturningResult:(id)a0;
- (void)sessionFailedToAddItem:(id)a0 completion:(id /* block */)a1;
- (void)sessionFailedToUpdateItem:(id)a0 completion:(id /* block */)a1;
- (void)sessionFailedToRemoveItem:(id)a0 completion:(id /* block */)a1;
- (void)sessionDidUpdateProgress:(float)a0;

@end
