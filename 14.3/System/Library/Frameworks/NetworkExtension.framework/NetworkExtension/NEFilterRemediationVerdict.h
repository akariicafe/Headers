@interface NEFilterRemediationVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)needRulesVerdict;
+ (id)allowVerdict;
+ (id)dropVerdict;

- (long long)filterAction;

@end
