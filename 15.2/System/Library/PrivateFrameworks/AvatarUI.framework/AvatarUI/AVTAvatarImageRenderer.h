@class AVTSnapshotBuilder, NSObject;
@protocol OS_dispatch_queue, AVTUILogger;

@interface AVTAvatarImageRenderer : NSObject

@property (retain, nonatomic) AVTSnapshotBuilder *snapshotBuilder;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *snapshotBuilderQueue;

- (void).cxx_destruct;
- (id)init;
- (id)initWithEnvironment:(id)a0;
- (id)imageForAvatar:(id)a0 scope:(id)a1;
- (id)initWithSnapshotBuilder:(id)a0 lockProvider:(id /* block */)a1 logger:(id)a2;
- (id)nts_imageForAvatar:(id)a0 scope:(id)a1;

@end
