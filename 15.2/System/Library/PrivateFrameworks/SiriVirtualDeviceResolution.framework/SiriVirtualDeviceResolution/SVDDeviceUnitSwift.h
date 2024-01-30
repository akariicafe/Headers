@class NSString;

@interface SVDDeviceUnitSwift : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ assistantId;
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ roomName;
    void /* unknown type, empty encoding */ mediaRouteIdentifier;
    void /* unknown type, empty encoding */ homeKitAccessoryIdentifier;
}

@property (class, nonatomic) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *assistantId;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *roomName;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ proximity;
@property (nonatomic, readonly) NSString *mediaRouteIdentifier;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isCommunalDevice;
@property (nonatomic, readonly) NSString *homeKitAccessoryIdentifier;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) long long hash;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 assistantId:(id)a1 builder:(id /* block */)a2;

@end
