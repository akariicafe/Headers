@class NSString;

@interface _HDRequiredShardItem : NSObject <NSSecureCoding> {
    NSString *_identifier;
    unsigned long long _options;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
