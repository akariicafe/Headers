@class NSString, NSNumber, INPerson;

@interface DeviceDetail : INObject

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *deviceClass;
@property (nonatomic, copy) NSString *productName;
@property (nonatomic, copy) NSString *category;
@property (nonatomic) long long deviceLocality;
@property (nonatomic, retain) INPerson *deviceOwner;
@property (nonatomic, copy) NSString *emoji;
@property (nonatomic, retain) NSNumber *isTheOnlyOneFound;
@property (nonatomic, copy) NSString *productType;
@property (nonatomic, retain) NSNumber *isEarbuds;
@property (nonatomic, retain) NSNumber *isHeadphones;
@property (nonatomic, copy) NSString *productNameSemantic;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
