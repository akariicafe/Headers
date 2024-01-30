@class NSObject;
@protocol RestrictionProtocol;

@interface cRestriction : NSObject <RestrictionProtocol>

@property (retain) NSObject<RestrictionProtocol> *restrictionObj;
@property int restrictId;
@property unsigned int ulType;
@property unsigned int weight;

- (void).cxx_destruct;
- (void)setRestriction:(id)a0;
- (int)encodeBuffer:(id)a0 BufferOffset:(unsigned int)a1 BytesWritten:(unsigned int *)a2;
- (id)initWithType:(unsigned int)a0 Weight:(unsigned int)a1;

@end
