@class NSString, NSArray, MTLFunctionStitchingFunctionNode;

@interface MTLFunctionStitchingGraph : NSObject <NSCopying>

@property (copy, nonatomic) NSString *functionName;
@property (copy, nonatomic) NSArray *nodes;
@property (copy, nonatomic) MTLFunctionStitchingFunctionNode *outputNode;
@property (copy, nonatomic) NSArray *attributes;

- (id)initWithFunctionName:(id)a0 nodes:(id)a1 outputNode:(id)a2 attributes:(id)a3;
- (id)description;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (void)dealloc;

@end
