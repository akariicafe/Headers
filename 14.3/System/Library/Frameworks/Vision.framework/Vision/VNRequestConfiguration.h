@class VNProcessingDevice;

@interface VNRequestConfiguration : NSObject <NSCopying>

@property (readonly, nonatomic) Class requestClass;
@property (nonatomic) unsigned long long resolvedRevision;
@property (nonatomic) unsigned long long detectionLevel;
@property (retain, nonatomic) VNProcessingDevice *processingDevice;
@property (nonatomic) unsigned long long metalContextPriority;
@property (nonatomic) BOOL preferBackgroundProcessing;
@property (nonatomic) unsigned long long modelFileBackingStore;

- (id)initWithRequestClass:(Class)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)_allPropertyNames;

@end
