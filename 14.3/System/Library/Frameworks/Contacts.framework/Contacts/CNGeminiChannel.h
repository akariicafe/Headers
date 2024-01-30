@class NSString, TUSenderIdentity;

@interface CNGeminiChannel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *channelIdentifier;
@property (readonly, nonatomic) NSString *localizedLabel;
@property (readonly, nonatomic) NSString *localizedBadgeLabel;
@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) TUSenderIdentity *senderIdentity;
@property (readonly, nonatomic, getter=isAvailable) BOOL available;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
