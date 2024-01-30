@class NSUUID;

@interface COAlarmReadRequest : COMeshRequest

@property (readonly, nonatomic) NSUUID *accessoryUniqueIdentifier;
@property (readonly, nonatomic) BOOL isForMerge;
@property (readonly, nonatomic) BOOL requiresFilter;

+ (BOOL)supportsSecureCoding;
+ (id)acceptableResponses;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithAccessory:(id)a0;
- (id)initForMerge;
- (id)initWithAccessoryUniqueIdentifier:(id)a0;
- (id)initWithAccessoryUniqueIdentifier:(id)a0 requiresFilter:(BOOL)a1;

@end
