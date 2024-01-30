@class NSString, NSUUID, _HMAudioControl, HMMediaSession;
@protocol HMAudioControlDelegate;

@interface HMAudioControl : NSObject <_HMAudioControlDelegate, HMObjectMerge>

@property (retain, nonatomic) _HMAudioControl *audioControl;
@property float volume;
@property (getter=isMuted) BOOL muted;
@property (weak) id<HMAudioControlDelegate> delegate;
@property (weak) HMMediaSession *mediaSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0 operations:(id)a1;
- (void)__configureWithContext:(id)a0;
- (id)initWithMediaSession:(id)a0;
- (void)audioControl:(id)a0 didUpdateVolume:(float)a1;
- (void)audioControl:(id)a0 didUpdateMuted:(BOOL)a1;
- (void)updateVolume:(float)a0 completionHandler:(id /* block */)a1;
- (void)updateMuted:(BOOL)a0 completionHandler:(id /* block */)a1;

@end
