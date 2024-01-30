@class NSString, SGIPPerson, NSArray, NSDate;

@interface SGIPMessage : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSString *messageId;
@property (retain, nonatomic) SGIPPerson *sender;
@property (retain, nonatomic) NSArray *recipients;
@property (retain, nonatomic) NSString *subject;
@property (retain, nonatomic) NSDate *dateSent;
@property (nonatomic) BOOL isSent;
@property (nonatomic) BOOL isGroupConversation;
@property (nonatomic) BOOL isSenderSignificant;
@property (retain, nonatomic) NSArray *messageUnits;

+ (id)messageWithIPMessage:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToMessage:(id)a0;
- (id)toIPMessage;
- (void)encodeWithCoder:(id)a0;

@end
