@class NSArray, NSString;

@interface SASyncVerificationResult : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long fail;
@property (copy, nonatomic) NSArray *failedObjectIds;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) long long total;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)verificationResult;
+ (id)verificationResultWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
