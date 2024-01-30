@class NSString, NSUUID, NSArray;

@interface INExtensionContext : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic, setter=_setRecordRoute:) NSString *_recordRoute;
@property (copy, nonatomic, setter=_setRecordDeviceUID:) NSUUID *_recordDeviceUID;
@property (copy, nonatomic, setter=_setRecordDeviceIdentifier:) NSString *_recordDeviceIdentifier;
@property (copy, nonatomic, setter=_setAirPlayRouteIdentifiers:) NSArray *_airPlayRouteIdentifiers;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
