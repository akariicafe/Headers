@class NSString, NSArray, NSNumber;

@interface SASportsMetadataGroup : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *groupTitle;
@property (copy, nonatomic) NSArray *metadata;
@property (copy, nonatomic) NSNumber *selected;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)metadataGroup;
+ (id)metadataGroupWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
