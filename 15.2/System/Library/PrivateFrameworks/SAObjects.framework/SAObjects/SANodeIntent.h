@class NSArray, NSString;
@protocol SAAceSerializable;

@interface SANodeIntent : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *matchingSpans;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSArray *privacyPolicy;
@property (retain, nonatomic) id<SAAceSerializable> value;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nodeIntent;
+ (id)nodeIntentWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
