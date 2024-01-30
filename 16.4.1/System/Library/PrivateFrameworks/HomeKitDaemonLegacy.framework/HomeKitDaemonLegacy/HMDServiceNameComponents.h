@class NSString;

@interface HMDServiceNameComponents : HMFObject

@property (retain, nonatomic) NSString *rawServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSString *format;

+ (id)componentsWithRawServiceName:(id)a0 rawRoomName:(id)a1;
+ (id)componentsWithRawServiceName:(id)a0 rawRoomName:(id)a1 localizedFormat:(id)a2;

- (void).cxx_destruct;
- (id)composedName;
- (id)initWithRawServiceName:(id)a0 rawRoomName:(id)a1 localizedFormat:(id)a2;

@end
