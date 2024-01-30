@class NSString, GEOLogMsgState, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAnalyticsPipelineStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
}

@property (retain) NSString *countryCode;

+ (id)sharedFactory;

- (id)_sessionStateForType:(int)a0;
- (void)sessionStateForType:(int)a0 onQueue:(id)a1 callback:(id /* block */)a2;
- (void)sessionStateForType:(int)a0 callback:(id /* block */)a1;
- (void)sessionStateForType:(int)a0 sessionAppId:(id)a1 onQueue:(id)a2 callback:(id /* block */)a3;
- (id)mapUIShown;
- (id)curatedCollectionRedacted;
- (void)deviceCountryChanged:(id)a0;
- (int)logMsgStateTypeForType:(long long)a0;
- (id)stateForType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
