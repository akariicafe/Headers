@interface TAFilterVisits : NSObject

+ (id)getAddressSetInTAVisitSnapshot:(id)a0;
+ (BOOL)shouldDetectWithStore:(id)a0 settings:(id)a1;
+ (id)filterSuspiciousDeviceWithStore:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
+ (id)filterSuspiciousDeviceWithStore:(id)a0 settings:(id)a1 andAppendOutgoingRequestsTo:(id)a2;
+ (id)getEntryAddressSetInTAVisitSnapshot:(id)a0 usingSettings:(id)a1;
+ (id)getExitAddressSetInTAVisitSnapshot:(id)a0 usingSettings:(id)a1;
+ (id)getIntersectionOfFirstSet:(id)a0 andSecondSet:(id)a1;
+ (id)getSuspiciousDeviceAdvertisementsFromVisitSnapshot:(id)a0 toVisitSnapshot:(id)a1 settings:(id)a2 currentClockTime:(id)a3;
+ (id)getSuspiciousDeviceAdvertisementsFromVisitSnapshot:(id)a0 toVisitSnapshot:(id)a1 settings:(id)a2 currentClockTime:(id)a3 skipFreshObservationCheck:(BOOL)a4;
+ (unsigned long long)identifyDetectionTypeWithStore:(id)a0 settings:(id)a1;
+ (BOOL)isReasonableSpeedOfTravelFrom:(id)a0 to:(id)a1;
+ (BOOL)sensitiveVisitsTooCloseBetweenFromLOIType:(unsigned long long)a0 toLOIType:(unsigned long long)a1 distance:(double)a2 settings:(id)a3;

@end
