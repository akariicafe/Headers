@interface TAFilterSingleVisit : NSObject

+ (BOOL)shouldDetectWithStore:(id)a0 filterSingleVisitSettings:(id)a1;
+ (id)filterSuspiciousDeviceWithStore:(id)a0 singleVisitSettings:(id)a1 andAppendOutgoingRequestsTo:(id)a2;

@end
