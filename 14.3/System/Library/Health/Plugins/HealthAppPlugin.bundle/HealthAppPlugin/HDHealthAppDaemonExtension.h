@class HDHealthAppProfileObserver, HDPrimaryProfile, NSString;

@interface HDHealthAppDaemonExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileExtension, HDHealthDaemonExtension>

@property (retain, nonatomic) HDHealthAppProfileObserver *profileObserver;
@property (retain, nonatomic) HDPrimaryProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)daemonReady:(id)a0;

@end
