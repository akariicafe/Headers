@class HDHealthAppDataObserver, HDProfile, NSString;

@interface HDHealthAppProfileExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileExtension>

@property (retain, nonatomic) HDHealthAppDataObserver *dataObserver;
@property (weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)daemonReady:(id)a0;

@end
