@class NSArray, NSData, NSMutableArray;

@interface MPSGraphVariable : NSObject <NSCopying> {
    NSData *_data;
    NSMutableArray *_mpsndarrays;
}

@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) struct Value { struct ValueImpl *impl; } value;

+ (id)newVariableWithData:(id)a0 dataType:(unsigned int)a1 shape:(id)a2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id).cxx_construct;
- (id)mpsNDArrayWithDevice:(id)a0;
- (id)initVariableWithData:(id)a0 value:(struct Value { struct ValueImpl *x0; })a1;
- (id)initVariableWithData:(id)a0 dataType:(unsigned int)a1 shape:(id)a2;
- (id)initVariableWithMPSNDArray:(id)a0 value:(struct Value { struct ValueImpl *x0; })a1;

@end
