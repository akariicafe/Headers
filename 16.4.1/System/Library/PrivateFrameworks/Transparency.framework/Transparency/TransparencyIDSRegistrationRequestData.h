@class NSString, NSData;

@interface TransparencyIDSRegistrationRequestData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSString *application;
@property (retain) NSData *tbsKTIDSRegistrationData;
@property (retain) NSData *pushToken;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithApplication:(id)a0 registrationData:(id)a1;

@end
