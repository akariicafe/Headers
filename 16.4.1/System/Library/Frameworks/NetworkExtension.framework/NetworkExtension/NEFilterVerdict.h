@class NSString;

@interface NEFilterVerdict : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying> {
    BOOL _remediate;
    BOOL _urlAppendString;
    BOOL _pause;
    NSString *_remediationURLMapKey;
    NSString *_remediationButtonTextMapKey;
    NSString *_urlAppendStringMapKey;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) long long filterAction;
@property BOOL needRules;
@property BOOL drop;
@property BOOL shouldReport;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDrop:(BOOL)a0 remediate:(BOOL)a1;

@end
