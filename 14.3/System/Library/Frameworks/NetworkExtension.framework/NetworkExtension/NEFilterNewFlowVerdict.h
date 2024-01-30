@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL filterInbound;
@property BOOL filterOutbound;
@property unsigned long long peekInboundBytes;
@property unsigned long long peekOutboundBytes;
@property long long statisticsReportFrequency;

+ (id)needRulesVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)a0 remediationButtonTextMapKey:(id)a1;
+ (id)URLAppendStringVerdictWithMapKey:(id)a0;
+ (id)filterDataVerdictWithFilterInbound:(BOOL)a0 peekInboundBytes:(unsigned long long)a1 filterOutbound:(BOOL)a2 peekOutboundBytes:(unsigned long long)a3;
+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)pauseVerdict;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (long long)filterAction;
- (void)encodeWithCoder:(id)a0;

@end
