@class NSData;

@interface CBBLEServiceDataInfo : NSObject

@property (copy, nonatomic) NSData *serviceData;
@property (nonatomic) unsigned short serviceUUID16;

- (void).cxx_destruct;

@end
