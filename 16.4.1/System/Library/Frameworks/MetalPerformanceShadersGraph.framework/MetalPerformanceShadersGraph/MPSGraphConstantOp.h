@class NSArray, NSData;

@interface MPSGraphConstantOp : MPSGraphOperation {
    NSData *_data;
    BOOL _isSplat;
}

@property (readonly, nonatomic) NSArray *shape;
@property (readonly, nonatomic) unsigned int dataType;

- (void).cxx_destruct;
- (id)initWithGraph:(id)a0 data:(id)a1 shape:(id)a2 dataType:(unsigned int)a3 isSplat:(BOOL)a4 name:(id)a5;
- (void *)makeMLIROpWithBuilder:(void *)a0 symbolTable:(void *)a1 inputValues:(void *)a2 opInitialization:(BOOL)a3 name:(id)a4;

@end
