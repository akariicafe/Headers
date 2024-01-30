@class MLCLossDescriptor, NSData;

@interface MLCYOLOLossDescriptor : NSObject <NSCopying>

@property (readonly, retain) MLCLossDescriptor *spatialPositionLossDescriptor;
@property (readonly, retain) MLCLossDescriptor *spatialSizeLossDescriptor;
@property (readonly, retain) MLCLossDescriptor *confidenceLossDescriptor;
@property (readonly, retain) MLCLossDescriptor *classesLossDescriptor;
@property (readonly, nonatomic) int reductionType;
@property (readonly, nonatomic) unsigned long long anchorBoxCount;
@property (readonly, copy, nonatomic) NSData *anchorBoxes;
@property (nonatomic) BOOL shouldRescore;
@property (nonatomic) float scaleSpatialPositionLoss;
@property (nonatomic) float scaleSpatialSizeLoss;
@property (nonatomic) float scaleNoObjectConfidenceLoss;
@property (nonatomic) float scaleObjectConfidenceLoss;
@property (nonatomic) float scaleClassLoss;
@property (nonatomic) float minimumIOUForObjectPresence;
@property (nonatomic) float maximumIOUForObjectAbsence;

+ (id)descriptorWithAnchorBoxes:(id)a0 anchorBoxCount:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setRescore:(BOOL)a0;
- (unsigned long long)numberOfAnchorBoxes;
- (id)initWithLossDescriptorWithSpatialPositionLossType:(int)a0 spatialSizeLossType:(int)a1 confidenceLossType:(int)a2 classesLossType:(int)a3 reductionType:(int)a4 anchorBoxCount:(unsigned long long)a5 anchorBoxes:(id)a6;

@end
