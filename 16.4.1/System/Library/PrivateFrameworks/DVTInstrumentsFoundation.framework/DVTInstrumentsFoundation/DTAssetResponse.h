@class NSString, NSData, DTXMessage;

@interface DTAssetResponse : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic, getter=isCompleted) BOOL completed;
@property (readonly, nonatomic) DTXMessage *message;

+ (id)completedResponseWithIdentifier:(id)a0;
+ (id)responseWithIdentifier:(id)a0 data:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 data:(id)a1 completed:(BOOL)a2;

@end
