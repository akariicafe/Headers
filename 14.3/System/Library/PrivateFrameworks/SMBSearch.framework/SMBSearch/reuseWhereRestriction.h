@interface reuseWhereRestriction : NSObject <RestrictionProtocol>

@property unsigned int resuseWhereID;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithReuseWhereID:(unsigned int)a0 Weight:(unsigned int)a1;
- (int)restrictionNumber;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;

@end
