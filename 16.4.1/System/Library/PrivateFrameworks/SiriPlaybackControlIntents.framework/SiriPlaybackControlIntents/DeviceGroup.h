@class NSString, NSArray, NSNumber;

@interface DeviceGroup : INObject

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSString *groupName;
@property (nonatomic, copy) NSArray *streams;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSNumber *includesTVs;
@property (nonatomic, retain) NSNumber *excludeGroup;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
