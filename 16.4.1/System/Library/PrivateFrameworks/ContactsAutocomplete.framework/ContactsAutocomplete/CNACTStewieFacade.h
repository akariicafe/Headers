@class NSString, NSArray, CNTimestamped, CTStewieStateMonitor, CoreTelephonyClient, NSNumber;

@interface CNACTStewieFacade : NSObject <CTStewieStateMonitorDelegate, CNACTStewieFacade> {
    CoreTelephonyClient *_coreTelephonyClient;
    CTStewieStateMonitor *_stateMonitor;
    NSNumber *_enabled;
    CNTimestamped *_memo;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly) BOOL isEnabled;
@property (readonly) NSArray *terms;

+ (id)localizedPhrases;
+ (BOOL)isEnabledState:(id)a0;
+ (BOOL)isEnabledServices:(long long)a0;
+ (BOOL)isMessagesApp;

- (void)stateChanged:(id)a0;
- (void)startMonitoring;
- (id)init;
- (void).cxx_destruct;
- (id)numbers;
- (id)initWithCoreTelephonyClient:(id)a0 stateMonitor:(id)a1;
- (double)withLock_AgeOfMemo;
- (BOOL)withLock_isEnabled;
- (BOOL)withLock_isMemoValid;

@end
