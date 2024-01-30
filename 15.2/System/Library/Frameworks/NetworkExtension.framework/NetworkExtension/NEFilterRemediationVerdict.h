@interface NEFilterRemediationVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)allowVerdict;
+ (id)needRulesVerdict;
+ (id)dropVerdict;

- (long long)filterAction;

@end
