@class NSData, NSString, MEMessageRecipients, NSArray, NSDate, MEEmailAddress, NSDictionary;

@interface MEMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MEMessageRecipients *recipients;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) long long encryptionState;
@property (readonly, copy, nonatomic) NSString *subject;
@property (readonly, copy, nonatomic) MEEmailAddress *fromAddress;
@property (readonly, copy, nonatomic) NSArray *toAddresses;
@property (readonly, copy, nonatomic) NSArray *ccAddresses;
@property (readonly, copy, nonatomic) NSArray *bccAddresses;
@property (readonly, copy, nonatomic) NSArray *replyToAddresses;
@property (readonly, copy, nonatomic) NSArray *allRecipientAddresses;
@property (readonly, copy, nonatomic) NSDate *dateSent;
@property (readonly, copy, nonatomic) NSDate *dateReceived;
@property (readonly, copy, nonatomic) NSDictionary *headers;
@property (readonly, copy, nonatomic) NSData *rawData;

+ (id)_protectedHeaders;
+ (BOOL)extensionCanSetHeaderKey:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_sanitaizedHeadersForHeaders:(id)a0;
- (id)initWithState:(long long)a0 encryptionState:(long long)a1 subject:(id)a2 recipients:(id)a3 from:(id)a4 dataSent:(id)a5 dateReceived:(id)a6 headers:(id)a7 rawData:(id)a8;

@end
