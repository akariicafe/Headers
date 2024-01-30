@interface NEFilterDataVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property unsigned long long passBytes;
@property unsigned long long peekBytes;
@property long long statisticsReportFrequency;

+ (id)allowVerdict;
+ (id)needRulesVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)a0 remediationButtonTextMapKey:(id)a1;
+ (id)dataVerdictWithPassBytes:(unsigned long long)a0 peekBytes:(unsigned long long)a1;
+ (id)pauseVerdict;
+ (id)dropVerdict;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (long long)filterAction;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
