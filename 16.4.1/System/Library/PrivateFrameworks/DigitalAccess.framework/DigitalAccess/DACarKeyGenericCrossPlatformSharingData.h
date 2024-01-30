@class NSString, NSData;

@interface DACarKeyGenericCrossPlatformSharingData : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sharingIdentifier;
@property (readonly, nonatomic) NSString *friendKeyIdentifier;
@property (readonly, nonatomic) long long messageType;
@property (readonly, nonatomic) NSData *message;

+ (id)decodeWithData:(id)a0 error:(id *)a1;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)encodeWithError:(id *)a0;
- (id)initWithSharingIdentifier:(id)a0 friendKeyIdentifier:(id)a1 sharingMessageType:(long long)a2 message:(id)a3;

@end
