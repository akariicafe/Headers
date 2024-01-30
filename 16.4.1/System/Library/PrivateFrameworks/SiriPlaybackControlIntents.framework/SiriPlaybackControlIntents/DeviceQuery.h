@class NSString, NSNumber;

@interface DeviceQuery : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *accessoryName;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *zoneName;
@property (nonatomic, copy) NSString *placeHintString;
@property (nonatomic, copy) NSString *deviceQuantifierString;
@property (nonatomic, copy) NSString *serviceName;
@property (nonatomic, copy) NSString *serviceGroup;
@property (nonatomic, copy) NSString *deviceTypeString;
@property (nonatomic, copy) NSString *referenceString;
@property (nonatomic, retain) NSNumber *fromEntity;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
