@class GEOLogMsgState, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface GEOAnalyticsPipelineStateFactory : NSObject {
    NSObject<OS_dispatch_queue> *_isolationQueue;
    GEOLogMsgState *_deviceIdentifierState;
    GEOLogMsgState *_deviceIdentifierInternalState;
    GEOLogMsgState *_applicationIdentifierState;
    NSString *_countryCode;
}

+ (id)sharedFactory;

- (id)placeCard;
- (id)tileSet;
- (id)deviceLocale;
- (id)mapView;
- (id)placeRequest;
- (id)mapSettings;
- (id)curatedCollection;
- (id)carPlay;
- (id)suggestions;
- (id)mapRestore;
- (id)mapUI;
- (id)mapLaunch;
- (id)market;
- (id)extension;
- (id)mapsServer;
- (id)deviceIdentifier;
- (id)deviceSettings_Short;
- (id)init;
- (void).cxx_destruct;
- (id)route;
- (id)deviceSettings_Long;
- (void)dealloc;
- (id)sessionStateForType:(long long)a0;
- (id)mapsUser;
- (id)ugc;
- (id)deviceIndentifierInternal;
- (id)lookAroundSummary;
- (id)pairedDevice;
- (id)mapViewLocation;
- (int)logMsgStateTypeForType:(long long)a0;
- (id)deviceIdentifierNoHardware;
- (id)_emptyUserSessionState;
- (id)applicationIdentifier;
- (id)lookAroundView;
- (void)deviceCountryChanged:(id)a0;
- (id)mapUIShown;
- (id)deviceConnectionLimited;
- (id)experimentsIncludingABAssignInfo:(BOOL)a0 includingClientConfig:(BOOL)a1;
- (id)deviceConnection;
- (id)carPlayLimited;
- (id)muninResourceLog;
- (id)stateForType:(long long)a0;
- (id)deviceLocaleLimited;

@end
