@class NSString, SAPerson;
@protocol SAAceComparable;

@interface SAPersonAttribute : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *data;
@property (copy, nonatomic) NSString *dataType;
@property (copy, nonatomic) NSString *displayText;
@property (retain, nonatomic) SAPerson *object;
@property (retain, nonatomic) id<SAAceComparable> typedData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)personAttribute;
+ (id)personAttributeWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
