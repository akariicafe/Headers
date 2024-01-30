@class NSUUID, PHASEEngine;
@protocol PHASEExternalStreamDelegate;

@interface PHASEExternalStream : NSObject {
    NSUUID *_streamGroupUUID;
    NSUUID *_streamUUID;
    PHASEEngine *_engine;
}

@property (readonly, nonatomic) BOOL paused;
@property (readonly, nonatomic) unsigned int latencyInFrames;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, weak, nonatomic) id<PHASEExternalStreamDelegate> delegate;

+ (id)new;
+ (id)newUUID;

- (id)engine;
- (void)pause;
- (id)streamUUID;
- (id)init;
- (void).cxx_destruct;
- (void)resume;
- (id)initWithEngine:(id)a0 streamGroupUUID:(id)a1 streamUUID:(id)a2 startsPaused:(BOOL)a3 delegate:(id)a4;

@end
