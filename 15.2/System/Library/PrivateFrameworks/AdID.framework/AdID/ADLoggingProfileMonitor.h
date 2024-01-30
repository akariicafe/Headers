@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ADLoggingProfileMonitor : NSObject

@property (retain, nonatomic) NSSet *profileIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;

- (void)_profilesChanged:(id)a0;
- (id)fetchInstalledProfileIdentifiers;
- (BOOL)_hasRelevantProfileChanged:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_beginMonitoring;
- (void)_fetchInstalledProfilesAndListen;

@end
