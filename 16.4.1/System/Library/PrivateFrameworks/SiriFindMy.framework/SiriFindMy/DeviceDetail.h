@class SpeakableLocation, NSString, INPerson, NSNumber;

@interface DeviceDetail : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, copy) NSString *productNameSemantic;
@property (nonatomic, copy) NSString *deviceClassSemantic;
@property (nonatomic, copy) NSString *category;
@property (nonatomic) long long deviceLocality;
@property (nonatomic, retain) INPerson *deviceOwner;
@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, retain) NSNumber *isEarbuds;
@property (nonatomic, retain) NSNumber *isHeadphones;
@property (nonatomic, retain) NSNumber *isThisDevice;
@property (nonatomic) long long deviceSpecificityLevel;
@property (nonatomic, retain) SpeakableLocation *location;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
