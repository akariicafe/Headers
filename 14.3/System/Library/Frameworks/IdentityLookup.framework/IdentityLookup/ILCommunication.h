@class NSString, NSDate;

@interface ILCommunication : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *sender;
@property (readonly, copy, nonatomic) NSDate *dateReceived;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithSender:(id)a0 dateReceived:(id)a1;
- (BOOL)isEqualToCommunication:(id)a0;

@end
