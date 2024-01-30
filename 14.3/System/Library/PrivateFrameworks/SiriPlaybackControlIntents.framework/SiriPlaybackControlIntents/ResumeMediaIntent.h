@class NSArray, NSString, DeviceQuery;

@interface ResumeMediaIntent : INIntent

@property (copy, nonatomic) NSArray *devices;
@property (copy, nonatomic) NSArray *deviceContext;
@property (nonatomic) long long mediaType;
@property (copy, nonatomic) NSString *targetBundleIdentifier;
@property (copy, nonatomic) DeviceQuery *deviceQuery;

@end
