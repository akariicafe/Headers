@class NSData, NSString, MEMessageRecipients, NSArray, NSDate, MEEmailAddress, NSDictionary;

@interface MEMessage : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) MEMessageRecipients *recipients;
@property (readonly, nonatomic) long long state;
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

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_sanitaizedHeadersForHeaders:(id)a0;
- (id)initWithState:(long long)a0 subject:(id)a1 recipients:(id)a2 from:(id)a3 dataSent:(id)a4 dateReceived:(id)a5 headers:(id)a6 rawData:(id)a7;

@end
