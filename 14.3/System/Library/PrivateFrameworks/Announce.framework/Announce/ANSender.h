@class NSString;

@interface ANSender : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long type;

+ (id)senderWithID:(id)a0 type:(unsigned long long)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithID:(id)a0 type:(unsigned long long)a1;
- (id)stringForSenderIdentifierType:(unsigned long long)a0;

@end
