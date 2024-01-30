@class NSURL, ECMessageFlagChange;

@interface EMMessageTransferAction : EMMessageChangeAction

@property (readonly, nonatomic) NSURL *destinationMailboxURL;
@property (readonly, nonatomic) long long specialDestinationMailboxType;
@property (readonly, nonatomic) ECMessageFlagChange *flagChange;
@property (readonly, nonatomic) BOOL copyMessages;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)signpostType;
- (id)initWithCoder:(id)a0;
- (id)initWithMessageListItems:(id)a0 destinationMailbox:(id)a1 copyMessages:(BOOL)a2;
- (id)initWithMessageListItems:(id)a0 specialDestinationMailboxType:(long long)a1 flagChange:(id)a2 copyMessages:(BOOL)a3;
- (void)encodeWithCoder:(id)a0;

@end
