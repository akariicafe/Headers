@class NSXPCConnection;

@interface UAResumableActivitiesControlManager : NSObject {
    int _pid;
}

@property (retain) NSXPCConnection *connection;
@property (readonly) int serverPID;
@property id delegate;
@property int recordingPath;

+ (id)resumableActivitiesControlManager;

- (id)status;
- (void).cxx_destruct;
- (id)init;
- (id)defaults:(BOOL)a0;
- (id)enabledUUIDs;
- (void)terminateServer;
- (id)allUUIDsOfType:(unsigned long long)a0;
- (id)matchingUUIDForString:(id)a0;
- (id)debuggingInfo;
- (id)advertisedItemUUID;
- (id)currentAdvertisedItemUUID;
- (id)dynamicUserActivities;
- (id)recentActions:(BOOL)a0;
- (id)simulatorStatus;
- (id)status:(id)a0 options:(id)a1;
- (void)setDefault:(id)a0 value:(id)a1;
- (void)fetchMoreAppSuggestions;
- (void)restartServer;
- (void)setDebugOption:(id)a0 value:(id)a1;
- (void)callWillSaveDelegate:(id)a0;
- (void)callDidSaveDelegate:(id)a0;
- (void)injectBTLEItem:(id)a0 type:(unsigned long long)a1 identifier:(id)a2 title:(id)a3 activityPayload:(id)a4 webPageURL:(id)a5 remoteModel:(id)a6 duration:(double)a7 payloadDelay:(double)a8;
- (void)callWillSaveDelegate:(id)a0 completionHandler:(id /* block */)a1;
- (void)connectToRemote:(id)a0 port:(long long)a1;
- (void)rendevous:(id)a0 domain:(id)a1 active:(BOOL)a2;
- (void)setLocalReflect:(BOOL)a0;
- (void)synchronize;
- (void)peerDevices:(id)a0 completionHandler:(id /* block */)a1;
- (id)getSysdiagnoseStringsIncludingPrivateData:(BOOL)a0;
- (void)replayCommands:(id)a0 completionHandler:(id /* block */)a1;
- (BOOL)getAdvertisedBytes:(id)a0 completionHandler:(id /* block */)a1;

@end
