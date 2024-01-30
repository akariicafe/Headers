@class IDSDevice, NSArray, NSString, NSData;

@interface IDSActivityUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isDeviceOnline;
@property (retain, nonatomic) IDSDevice *matchingDevice;
@property (retain, nonatomic) NSArray *URIs;
@property (readonly, nonatomic) NSString *subActivity;
@property (readonly, nonatomic) NSData *pushToken;
@property (readonly, nonatomic) unsigned long long serverTimestamp;
@property (readonly, nonatomic) NSData *clientContext;

- (id)initWithSubActivity:(id)a0 pushToken:(id)a1 serverTimestamp:(unsigned long long)a2 clientContext:(id)a3 isDeviceOnline:(BOOL)a4;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
