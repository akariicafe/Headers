@class NSDictionary, NSString;

@interface AMSXDDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDictionary *JSONDictionary;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) long long type;

+ (id)allPairedDevices;
+ (id)deviceFromIdentifier:(id)a0;
+ (id)activePairedDevices;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithDeviceID:(id)a0 type:(long long)a1;
- (id)initWithJSONDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
