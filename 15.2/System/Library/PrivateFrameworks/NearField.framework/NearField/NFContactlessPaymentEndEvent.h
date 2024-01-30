@class NSDecimalNumber, NSString, NSDictionary, NSData, NFApplet;

@interface NFContactlessPaymentEndEvent : NSObject <NSSecureCoding> {
    NSString *_appletIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NFApplet *applet;
@property (readonly, retain, nonatomic) NSString *keyIdentifier;
@property (readonly, retain, nonatomic) NSString *readerIdentifier;
@property (readonly, retain, nonatomic) NSString *transactionIdentifier;
@property (readonly, nonatomic) BOOL didError;
@property (readonly, nonatomic) unsigned int command;
@property (readonly, nonatomic) unsigned short status;
@property (readonly, nonatomic) unsigned short type;
@property (readonly, nonatomic) unsigned short result;
@property (readonly, nonatomic) unsigned short informative;
@property (readonly, retain, nonatomic) NSDecimalNumber *amount;
@property (readonly, retain, nonatomic) NSString *currency;
@property (readonly, retain, nonatomic) NSData *tlv;
@property (readonly, retain, nonatomic) NSDictionary *felicaInfo;
@property (readonly, retain, nonatomic) NSDictionary *parsedInfo;
@property (readonly, nonatomic) BOOL background;

+ (BOOL)logsTransactionDetails;

- (id)asDictionary;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)appletIdentifier;
- (id)initWithDictionary:(id)a0;
- (void)_setApplet:(id)a0;

@end
