@class NSString, NSError;

@interface HMRemoteLoginMessage : HMFObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSError *error;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithSessionID:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initNewMessage;

@end
