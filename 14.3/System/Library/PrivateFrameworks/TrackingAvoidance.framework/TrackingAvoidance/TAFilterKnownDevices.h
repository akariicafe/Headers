@interface TAFilterKnownDevices : NSObject

+ (id)removeDuplicateSuspiciousDevices:(id)a0;
+ (id)removeKnownSuspiciousDevices:(id)a0 deviceRecord:(id)a1;
+ (id)removeMetricsFromKnownDevices:(id)a0 deviceRecord:(id)a1;

@end
