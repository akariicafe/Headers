@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface _RELocalTrainingContext : RETrainingContext <RERemoteTrainingServerInterface> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_handleInvalidation;
- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (void)_configureForRelevanceEngine:(id)a0;
- (id)_elementRelevanceEngine;
- (void)performTrainingWithElements:(id)a0 events:(id)a1 interactions:(id)a2 completion:(id /* block */)a3;
- (void)updateRemoteAttribute:(id)a0 forKey:(id)a1 completion:(id /* block */)a2;

@end
