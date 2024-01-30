@class NSString;

@interface SASyncAppIdentifyingInfo : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *buildNumber;
@property (copy, nonatomic) NSString *bundleId;
@property (copy, nonatomic) NSString *clientIdentifier;
@property (copy, nonatomic) NSString *version;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)appIdentifyingInfo;
+ (id)appIdentifyingInfoWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
