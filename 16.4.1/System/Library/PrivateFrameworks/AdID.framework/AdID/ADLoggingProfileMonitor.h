@class NSSet, NSObject;
@protocol OS_dispatch_queue;

@interface ADLoggingProfileMonitor : NSObject

@property (retain, nonatomic) NSSet *profileIdentifiers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *initQueue;

- (void)_beginMonitoring;
- (void)_fetchInstalledProfilesAndListen;
- (void)_profilesChanged:(id)a0;
- (BOOL)_hasRelevantProfileChanged:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)fetchInstalledProfileIdentifiers;

@end
