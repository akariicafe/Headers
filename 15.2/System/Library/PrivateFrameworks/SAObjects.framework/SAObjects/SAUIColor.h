@class NSNumber, NSString;

@interface SAUIColor : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSNumber *alpha;
@property (nonatomic) long long blueValue;
@property (nonatomic) long long greenValue;
@property (nonatomic) long long redValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)color;
+ (id)colorWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
