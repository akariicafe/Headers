@class NSString, NSDictionary;

@interface BWSensorConfiguration : NSObject

@property (readonly, nonatomic) NSString *portType;
@property (readonly, nonatomic) NSString *sensorIDString;
@property (readonly, nonatomic) NSDictionary *sensorIDDictionary;
@property (readonly, nonatomic) NSDictionary *cameraInfo;

- (id)description;
- (void)dealloc;
- (id)initWithPortType:(id)a0 sensorIDString:(id)a1 sensorIDDictionary:(id)a2 cameraInfo:(id)a3;

@end
