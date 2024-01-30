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

- (int)_launchActionFromAPLaunchAction:(int)a0;
- (id)mapsPlaceIds;
- (id)placeCardReveal;
- (id)impressionObject;
- (void)sessionStateForType:(int)a0 sessionAppId:(id)a1 onQueue:(id)a2 callback:(id /* block */)a3;
- (int)_rapPlaceCardTypeForRawType:(int)a0;
- (void)sessionStateForType:(int)a0 callback:(id /* block */)a1;
- (void)dealloc;
- (void)sessionStateForType:(int)a0 onQueue:(id)a1 callback:(id /* block */)a2;
- (id)stateForType:(long long)a0;
- (id)init;
- (void)deviceCountryChanged:(id)a0;
- (id)mapUIShown;
- (int)logMsgStateTypeForType:(long long)a0;
- (int)_privacyAllowedActionFromActualAction:(int)a0;
- (id)searchResults;
- (id)_sessionStateForType:(int)a0;
- (void).cxx_destruct;
- (id)placeCardRap;
- (id)curatedCollectionRedacted;

@end
