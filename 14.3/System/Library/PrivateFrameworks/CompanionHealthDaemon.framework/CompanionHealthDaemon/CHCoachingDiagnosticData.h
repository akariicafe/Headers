@class NSArray, HKCategorySample;

@interface CHCoachingDiagnosticData : NSObject

@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) HKCategorySample *coachingEventSample;

- (id)init;
- (void).cxx_destruct;
- (id)itemForInterval:(unsigned long long)a0 future:(BOOL)a1;

@end
