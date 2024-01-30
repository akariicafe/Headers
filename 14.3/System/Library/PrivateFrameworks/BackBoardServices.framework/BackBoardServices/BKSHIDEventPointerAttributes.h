@class NSArray;

@interface BKSHIDEventPointerAttributes : BKSHIDEventDigitizerAttributes

@property (nonatomic) unsigned short pointerState;
@property (copy, nonatomic) NSArray *hitTestContexts;
@property (nonatomic) double unacceleratedRelativePositionX;
@property (nonatomic) double unacceleratedRelativePositionY;
@property (nonatomic) double acceleratedRelativePositionX;
@property (nonatomic) double acceleratedRelativePositionY;
@property (nonatomic) long long activeModifiers;
@property (nonatomic) long long fingerDownCount;
@property (nonatomic) unsigned char pointerEdgeMask;

+ (id)protobufSchema;

- (void)appendDescriptionToFormatter:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;

@end
