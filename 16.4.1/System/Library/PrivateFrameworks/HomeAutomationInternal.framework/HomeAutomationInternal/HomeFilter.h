@class NSArray, NSString, NSNumber;

@interface HomeFilter : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSArray *entityIdentifiers;
@property (nonatomic, copy) NSString *entityName;
@property (nonatomic) long long entityType;
@property (nonatomic) long long outerDeviceType;
@property (nonatomic, copy) NSString *outerDeviceName;
@property (nonatomic) long long deviceType;
@property (nonatomic, copy) NSString *homeName;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic, copy) NSString *zoneName;
@property (nonatomic, retain) NSNumber *isExcludeFilter;
@property (nonatomic, retain) NSNumber *hasAllQuantifier;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
