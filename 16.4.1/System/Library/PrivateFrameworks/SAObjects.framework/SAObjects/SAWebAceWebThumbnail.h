@class NSURL;

@interface SAWebAceWebThumbnail : SAWebAcePicture

@property (copy, nonatomic) NSURL *url;

+ (id)aceWebThumbnailWithDictionary:(id)a0 context:(id)a1;
+ (id)aceWebThumbnail;

- (id)groupIdentifier;
- (id)encodedClassName;

@end
