@class NSArray;

@interface CRKFetchSupportedDevicePropertiesResultObject : CATTaskResultObject

@property (retain, nonatomic) NSArray *staticProperties;
@property (retain, nonatomic) NSArray *liveProperties;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
