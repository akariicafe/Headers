@interface MTLInferredInput : NSObject

@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long aluType;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long bufferIndex;
@property (readonly) unsigned long long stride;
@property (readonly) unsigned long long stepFunction;
@property (readonly) unsigned long long stepRate;
@property (readonly) BOOL baseInstanceUnused;

- (id)description;
- (id)formattedDescription:(unsigned long long)a0;
- (id)initWithDataType:(unsigned long long)a0 pixelFormat:(unsigned long long)a1 aluType:(unsigned long long)a2 offset:(unsigned long long)a3 bufferIndex:(unsigned long long)a4 stride:(unsigned long long)a5 stepFunction:(unsigned long long)a6 stepRate:(unsigned long long)a7 baseInstanceUnused:(BOOL)a8;

@end
