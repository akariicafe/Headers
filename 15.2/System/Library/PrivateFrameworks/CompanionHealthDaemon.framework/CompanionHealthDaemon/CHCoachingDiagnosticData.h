@class NSArray, HKCategorySample;

@interface CHCoachingDiagnosticData : NSObject

@property (readonly, nonatomic) NSArray *items;
@property (retain, nonatomic) HKCategorySample *coachingEventSample;

- (void).cxx_destruct;
- (id)init;
- (id)itemForInterval:(unsigned long long)a0 future:(BOOL)a1;

@end
