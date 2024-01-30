@class NSString;

@interface ILMessageCommunication : ILCommunication

@property (readonly, copy, nonatomic) NSString *messageBody;

+ (BOOL)supportsSecureCoding;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithSender:(id)a0 dateReceived:(id)a1 messageBody:(id)a2;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqualToMessageCommunication:(id)a0;

@end
