@class NSString;

@interface ISO18013RequestElement : NSObject <NSSecureCoding> {
    unsigned short _retentionIntent;
    NSString *_identifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
