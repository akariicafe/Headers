@class NSArray;

@interface CRKFetchDevicesResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *connectedDevices;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
