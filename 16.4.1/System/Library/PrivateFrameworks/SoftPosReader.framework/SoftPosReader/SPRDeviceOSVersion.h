@class NSString;

@interface SPRDeviceOSVersion : NSObject

@property (readonly, copy, nonatomic) NSString *shortVersion;
@property (readonly, copy, nonatomic) NSString *buildNumber;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDERRepresentation:(id)a0;

@end
