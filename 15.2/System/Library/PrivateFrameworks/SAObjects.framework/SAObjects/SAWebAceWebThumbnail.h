@class NSURL;

@interface SAWebAceWebThumbnail : SAWebAcePicture

@property (copy, nonatomic) NSURL *url;

+ (id)aceWebThumbnail;
+ (id)aceWebThumbnailWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
