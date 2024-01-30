@class NSMutableArray;

@interface cNodeRestriction : NSObject <RestrictionProtocol>

@property (retain) NSMutableArray *restrictArray;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (unsigned int)nodeCount;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithType:(unsigned int)a0 Weight:(unsigned int)a1;
- (int)appendRestriction:(id)a0;
- (int)restrictionNumber;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;

@end
