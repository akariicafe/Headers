@class NSData, NSString;

@interface NSCoreDataXPCMessage : NSObject <NSCoding, NSSecureCoding> {
    unsigned long long _messageCode;
    BOOL _allowAncillary;
    NSData *_messageBody;
    NSString *_token;
    NSString *_contextName;
    NSString *_contextTransactionAuthor;
    NSString *_processName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end
