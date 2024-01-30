@class NSString;

@interface FMClient.AuthenticationCredential : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ authToken;
    void /* unknown type, empty encoding */ personId;
    void /* unknown type, empty encoding */ hostName;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, readonly) NSString *authToken;
@property (nonatomic, readonly) NSString *personId;
@property (nonatomic, readonly) NSString *hostName;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAuthToken:(id)a0 personId:(id)a1 hostName:(id)a2;

@end
