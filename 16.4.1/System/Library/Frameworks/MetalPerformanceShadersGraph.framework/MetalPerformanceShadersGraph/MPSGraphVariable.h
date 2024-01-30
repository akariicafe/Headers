@class NSArray, NSData, NSMutableArray;

@interface MPSGraphVariable : NSObject <NSCopying> {
    NSData *_data;
    NSMutableArray *_mpsndarrays;
}

@property (readonly, copy, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;
@property (readonly, nonatomic) struct Value { struct ValueImpl *impl; } value;

+ (id)newVariableWithData:(id)a0 dataType:(unsigned int)a1 shape:(id)a2;

- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initVariableWithData:(id)a0 dataType:(unsigned int)a1 shape:(id)a2;
- (id)initVariableWithData:(id)a0 value:(struct Value { struct ValueImpl *x0; })a1;
- (id)initVariableWithMPSNDArray:(id)a0 value:(struct Value { struct ValueImpl *x0; })a1;
- (id)mpsNDArrayWithDevice:(id)a0;

@end
