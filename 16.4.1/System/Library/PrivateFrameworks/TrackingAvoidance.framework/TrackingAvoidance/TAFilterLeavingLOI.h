@interface TAFilterLeavingLOI : NSObject

+ (id)filterSuspiciousDeviceWithStore:(id)a0 leavingLOISettings:(id)a1 andAppendOutgoingRequestsTo:(id)a2;
+ (unsigned long long)getLeavingLOIDetectionTypeForLOIType:(unsigned long long)a0;
+ (unsigned long long)getLeavingLOINotificationImmediacyTypeForLOIType:(unsigned long long)a0 leavingLOISettings:(id)a1;
+ (BOOL)shouldDetectWithStore:(id)a0 filterLeavingLOISettings:(id)a1;

@end
