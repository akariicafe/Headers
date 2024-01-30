@class NSString;

@interface FMClient.PlaySoundDevice : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ serverId;
    void /* unknown type, empty encoding */ locality;
}

@property (class, nonatomic, readonly) NSString *PlaySoundDeviceLocalityLocal;
@property (class, nonatomic, readonly) NSString *PlaySoundDeviceLocalityRemote;
@property (class, nonatomic, readonly) NSString *PlaySoundDeviceLocalityUnknown;
@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *serverId;
@property (nonatomic, readonly) NSString *locality;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ safetyWarningConfirmed;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithServerId:(id)a0 locality:(id)a1 safetyWarningConfirmed:(BOOL)a2;

@end
