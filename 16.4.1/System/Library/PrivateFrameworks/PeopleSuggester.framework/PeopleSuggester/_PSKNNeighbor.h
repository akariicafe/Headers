@class NSArray;

@interface _PSKNNeighbor : NSObject

@property (nonatomic) double distance;
@property (retain, nonatomic) NSArray *nodeData;

- (void).cxx_destruct;
- (id)initWithNodeData:(id)a0 distance:(double)a1;

@end
