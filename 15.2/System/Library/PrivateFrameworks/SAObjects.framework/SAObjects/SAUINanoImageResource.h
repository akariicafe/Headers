@class NSString, SAUIDecoratedText;

@interface SAUINanoImageResource : SAUIImageResource

@property (nonatomic) BOOL backgroundNeeded;
@property (copy, nonatomic) NSString *imageDownloadType;
@property (retain, nonatomic) SAUIDecoratedText *monogram;
@property (copy, nonatomic) NSString *placeholderImage;

+ (id)nanoImageResource;
+ (id)nanoImageResourceWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
