@class NSString;

@interface AFSiriTaskUsageResult : NSObject <NSSecureCoding> {
    NSString *_originatingAceID;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_initWithOriginatingAceID:(id)a0;
- (id)_originatingAceID;
- (id)_resultDescription;

@end
