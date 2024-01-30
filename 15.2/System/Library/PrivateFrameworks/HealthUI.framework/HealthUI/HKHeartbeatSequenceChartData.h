@class NSMutableArray;

@interface HKHeartbeatSequenceChartData : NSObject

@property (readonly, nonatomic) NSMutableArray *sections;
@property (nonatomic) double initialXAxisOffset;

- (long long)sectionCount;
- (void).cxx_destruct;
- (id)init;
- (void)addSequencePoint:(id)a0 section:(long long)a1;
- (void)enumerateSequences:(id /* block */)a0;
- (void)_expandToSection:(long long)a0;

@end
