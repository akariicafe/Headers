@class NSString, NSNumber;

@interface SAWebAcePicture : AceObject <SAAceSerializable>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *format;
@property (copy, nonatomic) NSNumber *height;
@property (copy, nonatomic) NSNumber *width;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)acePictureWithDictionary:(id)a0 context:(id)a1;
+ (id)acePicture;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
