@class NSString, NSArray, INPerson;

@interface DeviceQuery : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *deviceType;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, retain) INPerson *deviceOwner;
@property (nonatomic, copy) NSArray *deviceTypeCategories;
@property (nonatomic, copy) NSString *deviceTypeOriginalInput;
@property (nonatomic, copy) NSString *productType;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
