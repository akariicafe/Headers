@class NSString;

@interface SADPHeadphone : SADPDeviceDetail

@property (nonatomic) BOOL inOrOverEar;
@property (copy, nonatomic) NSString *position;

+ (id)headphone;
+ (id)headphoneWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
