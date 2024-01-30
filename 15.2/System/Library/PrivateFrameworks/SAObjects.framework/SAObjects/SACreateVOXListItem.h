@class NSArray, NSString;

@interface SACreateVOXListItem : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *displayHints;
@property (copy, nonatomic) NSString *speakableInSequence;
@property (copy, nonatomic) NSString *speakableStandalone;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)createVOXListItem;
+ (id)createVOXListItemWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
