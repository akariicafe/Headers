@class PKApplicationMessageGroupDescriptor, PKApplicationMessageAction, PKApplicationMessageContentDefault;

@interface PKApplicationMessageContent : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) PKApplicationMessageContentDefault *contentTypeDefault;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) PKApplicationMessageGroupDescriptor *group;
@property (readonly, nonatomic) PKApplicationMessageAction *action;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
