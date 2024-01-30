@class NSString, NSMutableArray, BWGraph;

@interface FigCapturePipeline : NSObject

@property (readonly, nonatomic) NSMutableArray *nodes;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) BWGraph *graph;

- (BOOL)addNode:(id)a0 error:(id *)a1;
- (void)dealloc;
- (id)initWithGraph:(id)a0 name:(id)a1;

@end
