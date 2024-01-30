@class NSData, MPSCNNLossDescriptor;

@interface MPSCNNYOLOLossDescriptor : NSObject <NSCopying>

@property (retain, nonatomic) MPSCNNLossDescriptor *XYLossDescriptor;
@property (retain, nonatomic) MPSCNNLossDescriptor *WHLossDescriptor;
@property (retain, nonatomic) MPSCNNLossDescriptor *confidenceLossDescriptor;
@property (retain, nonatomic) MPSCNNLossDescriptor *classesLossDescriptor;
@property (nonatomic) int reductionType;
@property (nonatomic) BOOL reduceAcrossBatch;
@property (nonatomic) BOOL rescore;
@property (nonatomic) float scaleXY;
@property (nonatomic) float scaleWH;
@property (nonatomic) float scaleNoObject;
@property (nonatomic) float scaleObject;
@property (nonatomic) float scaleClass;
@property (nonatomic) float minIOUForObjectPresence;
@property (nonatomic) float maxIOUForObjectAbsence;
@property (nonatomic) unsigned long long numberOfAnchorBoxes;
@property (retain, nonatomic) NSData *anchorBoxes;

+ (id)cnnLossDescriptorWithXYLossType:(unsigned int)a0 WHLossType:(unsigned int)a1 confidenceLossType:(unsigned int)a2 classesLossType:(unsigned int)a3 reductionType:(int)a4 anchorBoxes:(id)a5 numberOfAnchorBoxes:(unsigned long long)a6;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)debugDescription;
- (void)dealloc;
- (id)initWithXYLossType:(unsigned int)a0 WHLossType:(unsigned int)a1 confidenceLossType:(unsigned int)a2 classesLossType:(unsigned int)a3 reductionType:(int)a4 anchorBoxes:(id)a5 numberOfAnchorBoxes:(unsigned long long)a6;

@end
