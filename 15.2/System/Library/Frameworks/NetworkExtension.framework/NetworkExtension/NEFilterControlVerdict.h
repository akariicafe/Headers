@interface NEFilterControlVerdict : NEFilterNewFlowVerdict <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property BOOL updateRules;
@property BOOL handledByDataProvider;

+ (id)allowVerdictWithUpdateRules:(BOOL)a0;
+ (id)dropVerdictWithUpdateRules:(BOOL)a0;
+ (id)updateRules;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
