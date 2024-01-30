@class SAObjectSupport, NSString, NSArray, NSURL;

@interface SACommandSupport : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *aceVersion;
@property (copy, nonatomic) NSString *commandId;
@property (retain, nonatomic) SAObjectSupport *resultSupport;
@property (copy, nonatomic) NSURL *serverEndpoint;
@property (copy, nonatomic) NSArray *supportedConstraints;
@property (nonatomic) long long weight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)commandSupport;
+ (id)commandSupportWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
