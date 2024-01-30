@class NSString;

@interface NEFilterVerdict : NSObject <NEPrettyDescription, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL needRules;
@property BOOL drop;
@property BOOL remediate;
@property BOOL urlAppendString;
@property BOOL pause;
@property (retain) NSString *remediationURLMapKey;
@property (retain) NSString *remediationButtonTextMapKey;
@property (retain) NSString *urlAppendStringMapKey;
@property (readonly) long long filterAction;
@property BOOL shouldReport;

+ (unsigned int)statisticsReportFrequencyToMilliseconds:(long long)a0;
+ (id)statisticsReportFrequencyToString:(long long)a0;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithDrop:(BOOL)a0 remediate:(BOOL)a1;
- (id)initWithPause:(BOOL)a0;

@end
