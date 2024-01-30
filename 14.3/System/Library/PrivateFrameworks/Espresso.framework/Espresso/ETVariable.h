@class ETModelDef, NSString;

@interface ETVariable : NSObject

@property (weak, nonatomic) ETModelDef *model;
@property (nonatomic) unsigned long long kind;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *layerName;
@property unsigned long long initializationMode;
@property float initializationAlpha;
@property float initializationBeta;

- (id)initWithModelDef:(id)a0;
- (id)getOpaqueCopy;
- (id)swapWithOpaqueCopy:(id)a0;
- (void).cxx_destruct;
- (void)updateWithData:(id)a0;
- (id)copyData;

@end
