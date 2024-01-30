@class NSString;

@interface NUDeviceTrait : NSObject <NUDeviceTrait>

@property (readonly, nonatomic) unsigned long long deviceTraitSize;
@property (readonly, nonatomic, getter=isLandscape) BOOL landscape;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDeviceTraitSize:(unsigned long long)a0;

@end
