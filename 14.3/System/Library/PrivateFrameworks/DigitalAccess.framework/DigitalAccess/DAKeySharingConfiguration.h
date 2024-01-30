@class NSString, NSData;

@interface DAKeySharingConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned long long profile;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSData *metaData;
@property (readonly, nonatomic) long long targetDeviceType;

- (void).cxx_destruct;
- (id)initWithProfile:(unsigned long long)a0 displayName:(id)a1 metaData:(id)a2 targetDeviceType:(long long)a3;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
