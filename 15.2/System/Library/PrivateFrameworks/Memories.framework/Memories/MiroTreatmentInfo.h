@class NSDictionary, NSString;

@interface MiroTreatmentInfo : NSObject <AltAspect>

@property (nonatomic) double altAspect;
@property (nonatomic) int requiredTreatmentStyle;
@property (nonatomic) unsigned long long assignedKBStyle;
@property (nonatomic) BOOL treatmentApplied;
@property (nonatomic) int assignedTreatmentStyle;
@property (retain, nonatomic) NSDictionary *assignedTreatmentDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
