@interface CSPhoneCallStateMonitor : CSEventMonitor

+ (id)sharedInstance;

- (BOOL)firstPartyCall;
- (unsigned long long)phoneCallState;

@end
