@class NSArray, NSString;

@interface SAResultCallback : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) long long code;
@property (copy, nonatomic) NSArray *commandReferences;
@property (copy, nonatomic) NSArray *commands;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultCallback;
+ (id)resultCallbackWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
