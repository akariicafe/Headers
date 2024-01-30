@class NSString;

@interface FMClient.VoiceAssistantDeviceName : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ deviceName;
    void /* unknown type, empty encoding */ ownerFirstName;
    void /* unknown type, empty encoding */ ownerLastName;
    void /* unknown type, empty encoding */ $__lazy_storage_$_syncAnchor;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *ownerFirstName;
@property (nonatomic, readonly) NSString *ownerLastName;
@property (nonatomic, copy) NSString *syncAnchor;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDeviceName:(id)a0 ownerFirstName:(id)a1 ownerLastName:(id)a2;

@end
