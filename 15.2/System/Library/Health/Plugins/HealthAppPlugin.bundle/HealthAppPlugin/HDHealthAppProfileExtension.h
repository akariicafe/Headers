@class HDHealthAppDataObserver, NSString, HDProfile, HDHealthAppSharingEntryObserver, HDHealthAppLabConceptObserver;

@interface HDHealthAppProfileExtension : NSObject <HDHealthDaemonReadyObserver, HDProfileExtension>

@property (retain, nonatomic) HDHealthAppDataObserver *dataObserver;
@property (retain, nonatomic) HDHealthAppLabConceptObserver *labConceptObserver;
@property (retain, nonatomic) HDHealthAppSharingEntryObserver *sharingEntryObserver;
@property (weak, nonatomic) HDProfile *profile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;

@end
