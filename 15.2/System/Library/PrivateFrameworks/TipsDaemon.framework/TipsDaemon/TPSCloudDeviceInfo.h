@class NSString;

@interface TPSCloudDeviceInfo : TPSSerializableObject

@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *minOSVersion;
@property (copy, nonatomic) NSString *maxOSVersion;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)debugDescription;

@end
