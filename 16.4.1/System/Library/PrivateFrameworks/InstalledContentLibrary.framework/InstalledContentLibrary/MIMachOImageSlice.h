@interface MIMachOImageSlice : NSObject

@property (nonatomic) unsigned int platform;
@property (nonatomic) unsigned int sdkVersion;
@property (nonatomic) unsigned int minOSVersion;

- (id)initWithPlatform:(unsigned int)a0 sdkVersion:(unsigned int)a1 minOSVersion:(unsigned int)a2;

@end
