@class NSData, NSString;

@interface NSCoreDataXPCMessage : NSObject <NSCoding, NSSecureCoding> {
    unsigned long long _messageCode;
    NSData *_messageBody;
    NSString *_token;
    NSString *_contextName;
    NSString *_contextTransactionAuthor;
    NSString *_processName;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;

@end
