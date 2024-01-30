@class NSXPCConnection;

@interface UAResumableActivitiesControlManager : NSObject {
    int _pid;
}

@property (retain) NSXPCConnection *connection;
@property (readonly) int serverPID;
@property id delegate;
@property int recordingPath;

+ (id)resumableActivitiesControlManager;

- (void)synchronize;
- (id)init;
- (id)status;
- (void).cxx_destruct;
- (id)allUUIDsOfType:(unsigned long long)a0;
- (id)simulatorStatus;
- (id)status:(id)a0 options:(id)a1;
- (void)terminateServer;
- (id)advertisedItemUUID;
- (void)callDidSaveDelegate:(id)a0;
- (void)callWillSaveDelegate:(id)a0;
- (void)callWillSaveDelegate:(id)a0 completionHandler:(id /* block */)a1;
- (void)connectToRemote:(id)a0 port:(long long)a1;
- (id)currentAdvertisedItemUUID;
- (id)debuggingInfo;
- (id)defaults:(BOOL)a0;
- (id)dynamicUserActivities;
- (id)enabledUUIDs;
- (void)fetchMoreAppSuggestions;
- (BOOL)getAdvertisedBytes:(id)a0 completionHandler:(id /* block */)a1;
- (id)getSysdiagnoseStringsIncludingPrivateData:(BOOL)a0;
- (void)injectBTLEItem:(id)a0 type:(unsigned long long)a1 identifier:(id)a2 title:(id)a3 activityPayload:(id)a4 webPageURL:(id)a5 remoteModel:(id)a6 duration:(double)a7 payloadDelay:(double)a8;
- (id)matchingUUIDForString:(id)a0;
- (void)peerDevices:(id)a0 completionHandler:(id /* block */)a1;
- (id)recentActions:(BOOL)a0;
- (void)rendevous:(id)a0 domain:(id)a1 active:(BOOL)a2;
- (void)replayCommands:(id)a0 completionHandler:(id /* block */)a1;
- (void)restartServer;
- (void)setDebugOption:(id)a0 value:(id)a1;
- (void)setDefault:(id)a0 value:(id)a1;
- (void)setLocalReflect:(BOOL)a0;

@end
