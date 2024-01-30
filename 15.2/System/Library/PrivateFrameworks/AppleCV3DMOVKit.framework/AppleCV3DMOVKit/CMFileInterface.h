@class CMDataContainer;

@interface CMFileInterface : NSObject {
    CMDataContainer *_cmDataContainer;
}

+ (void)updateCV3DVersion:(id)a0 container:(id)a1;
+ (void)updateCVPlayerVersion:(id)a0 container:(id)a1;
+ (void)updateSessionID:(id)a0 container:(id)a1;
+ (BOOL)writeContainerToFileURL:(id)a0 container:(id)a1;

- (id)sessionID;
- (id)version;
- (void).cxx_destruct;
- (id)iOSVersion;
- (void)processCMData:(id)a0;
- (id)deviceString;
- (void)resetReader;
- (id)grabNextEvent;
- (id)cv3dVersion;
- (id)macOSVersion;
- (id)cvPlayerVersion;
- (id)initReaderWithFileURL:(id)a0;
- (id)grabNextRecvData;
- (id)grabNextSentData;
- (id)grabNextRecvMessage;
- (id)grabNextSentMessage;
- (id)initWriter;
- (void)updateCV3DVersion:(id)a0;
- (void)updateCVPlayerVersion:(id)a0;
- (void)updateSessionID:(id)a0;
- (void)processCMData:(id)a0 sending:(BOOL)a1;
- (BOOL)saveToFileURL:(id)a0;

@end
