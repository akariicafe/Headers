@class VNProcessingDevice;

@interface VNRequestConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) Class requestClass;
@property (nonatomic) unsigned long long resolvedRevision;
@property (nonatomic) unsigned long long detectionLevel;
@property (retain, nonatomic) VNProcessingDevice *processingDevice;
@property (readonly, copy, nonatomic) VNProcessingDevice *resolvedProcessingDevice;
@property (nonatomic) unsigned long long metalContextPriority;
@property (nonatomic) BOOL preferBackgroundProcessing;
@property (nonatomic) unsigned long long modelFileBackingStore;
@property (nonatomic) unsigned long long maximumProcessingDimensionOnTheLongSide;
@property (nonatomic) unsigned long long memoryPoolId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;
- (id)_allPropertyNames;

@end
