@class NSArray;

@interface PXStoryColorGradingConfiguration : NSObject

@property (readonly, nonatomic) NSArray *cubeInfos;
@property (readonly, nonatomic) unsigned long long count;

- (id)objectAtIndexedSubscript:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCubeInfos:(id)a0;

@end
