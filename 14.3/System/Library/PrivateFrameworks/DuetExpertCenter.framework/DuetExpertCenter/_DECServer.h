@class NSString, NSXPCConnection, _DECPredictionCache, _DECServerResponder, NSObject;
@protocol OS_dispatch_queue;

@interface _DECServer : NSObject <_DECServer> {
    _DECServerResponder *_responder;
    _DECPredictionCache *_resultCache;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic) unsigned long long categories;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSXPCConnection *connection;

+ (id)_defaultRestorationDirectory;
+ (id)serverWithConnection:(id)a0 responder:(id)a1;

- (void).cxx_destruct;
- (void)prewarmPredictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 reply:(id /* block */)a2;
- (id)_restorationPath;
- (id)initWithConnection:(id)a0 responder:(id)a1;
- (void)predictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 criteria:(id)a2 limit:(unsigned long long)a3 backgroundQuery:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)setPrediction:(id)a0 category:(unsigned long long)a1 consumer:(unsigned long long)a2 reply:(id /* block */)a3;
- (void)predictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 criteria:(id)a2 limit:(unsigned long long)a3 providesFeedback:(BOOL)a4 reply:(id /* block */)a5;
- (void)_filterPrediction:(id)a0 forConsumer:(unsigned long long)a1;
- (void)predictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 limit:(unsigned long long)a2 providesFeedback:(BOOL)a3 reply:(id /* block */)a4;
- (void)predictionForCategories:(unsigned long long)a0 consumer:(unsigned long long)a1 limit:(unsigned long long)a2 completionHandler:(id /* block */)a3;
- (void)userAbandoned:(id)a0 result:(id)a1 metadata:(id)a2 reply:(id /* block */)a3;
- (void)registerClient:(long long)a0 category:(unsigned long long)a1 identifier:(id)a2 reply:(id /* block */)a3;
- (void)invalidate;
- (void)userEngaged:(id)a0 result:(id)a1 metadata:(id)a2 reply:(id /* block */)a3;

@end
