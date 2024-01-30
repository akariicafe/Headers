@class NSString;

@interface HFServiceNameComponents : NSObject

@property (retain, nonatomic) NSString *rawServiceName;
@property (retain, nonatomic) NSString *serviceName;
@property (retain, nonatomic) NSString *roomName;
@property (readonly, nonatomic) NSString *composedString;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithRawServiceName:(id)a0 rawRoomName:(id)a1;

@end
