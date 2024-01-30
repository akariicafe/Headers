@class NSString, NSError;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)initWithSessionID:(id)a0;
- (id)initNewMessage;
- (void)encodeWithCoder:(id)a0;

@end
