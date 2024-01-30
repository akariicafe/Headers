@class NSNumber;

@interface SASSetMultilingualDictationConfig : SABaseClientBoundCommand

@property (nonatomic) BOOL multilingualDisabled;
@property (copy, nonatomic) NSNumber *multilingualTimeoutInMillis;

+ (id)setMultilingualDictationConfig;
+ (id)setMultilingualDictationConfigWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
