@class NSObject;
@protocol RestrictionProtocol;

@interface cCoercionRestriction : NSObject <RestrictionProtocol>

@property int cop;
@property unsigned int fValue;
@property (retain) NSObject<RestrictionProtocol> *restrictionObj;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (void)setRestriction:(id)a0;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithOp:(int)a0 FValue:(unsigned int)a1 Weight:(unsigned int)a2;
- (int)restrictionNumber;
- (unsigned int)get_ultype;
- (unsigned int)get_weight;

@end
