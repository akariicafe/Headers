@class NSString, SVDDeviceUnitSwift;

@interface SVDDeviceUnit : NSObject <NSSecureCoding, NSCopying> {
    SVDDeviceUnitSwift *_backing;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *assistantId;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) NSString *roomName;
@property (readonly, nonatomic) long long proximity;
@property (readonly, nonatomic) NSString *mediaRouteIdentifier;
@property (readonly, nonatomic) BOOL isCommunalDevice;
@property (readonly, nonatomic) NSString *homeKitAccessoryIdentifier;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDeviceUnit:(id)a0;
- (id)initWithIdentifier:(id)a0 assistantId:(id)a1 builder:(id /* block */)a2;
- (id)initWithIdentifier:(id)a0 assistantId:(id)a1 name:(id)a2 roomName:(id)a3 proximity:(long long)a4;

@end
