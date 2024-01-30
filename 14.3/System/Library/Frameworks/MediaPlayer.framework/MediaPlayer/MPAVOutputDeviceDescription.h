@class NSString;

@interface MPAVOutputDeviceDescription : NSObject

@property (readonly, nonatomic) long long routeType;
@property (readonly, nonatomic) long long routeSubtype;
@property (readonly, nonatomic) NSString *uid;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithDeviceType:(long long)a0 deviceSubtype:(long long)a1 uid:(id)a2;

@end
