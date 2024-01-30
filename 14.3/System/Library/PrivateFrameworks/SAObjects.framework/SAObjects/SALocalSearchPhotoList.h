@class NSArray, NSString;

@interface SALocalSearchPhotoList : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *photos;
@property (copy, nonatomic) NSString *providerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)photoListWithDictionary:(id)a0 context:(id)a1;
+ (id)photoList;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
