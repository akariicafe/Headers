@class NSString;

@interface ACCiAP2ShimAccessory : NSObject

@property (readonly) NSString *keyTag;
@property (readonly) NSString *keyAccessoryUID;
@property (readonly) NSString *keyConnectionID;
@property unsigned int connectionID;
@property (readonly) unsigned int featureTypeMask;
@property (readonly) NSString *accessoryUID;
@property (retain) NSString *name;
@property (retain) NSString *model;
@property (retain) NSString *manufacturer;
@property (retain) NSString *serialNumber;
@property (retain) NSString *firmwareVersion;
@property (retain) NSString *hardwareVersion;
@property (retain) id context;
@property BOOL dontPublish;

- (void).cxx_destruct;
- (id)description;
- (void)addFeature:(int)a0;
- (void)removeFeature:(int)a0;
- (id)initWithUID:(id)a0 keyTag:(id)a1 features:(unsigned int)a2;
- (id)connectionIDObj;
- (id)accessoryInfoDict;

@end
