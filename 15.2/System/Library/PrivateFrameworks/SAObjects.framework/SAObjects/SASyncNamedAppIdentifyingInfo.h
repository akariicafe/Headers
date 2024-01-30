@class NSString;

@interface SASyncNamedAppIdentifyingInfo : SASyncAppIdentifyingInfo

@property (copy, nonatomic) NSString *localizedBundleDisplayName;

+ (id)namedAppIdentifyingInfo;
+ (id)namedAppIdentifyingInfoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
