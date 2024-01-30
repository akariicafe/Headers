@class NSArray;

@interface SNProcessVoiceTriggerModelOutput : NSObject

@property (readonly, nonatomic) NSArray *commandFilters;

- (void).cxx_destruct;
- (id)initWithCommands:(id)a0;
- (id)processNewResults:(id)a0 timeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })a1;

@end
