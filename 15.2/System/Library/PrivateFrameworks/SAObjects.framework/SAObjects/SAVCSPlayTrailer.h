@class NSString, NSURL, SAUIImageResource;

@interface SAVCSPlayTrailer : SAAceView

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSURL *hiresTrailerUri;
@property (retain, nonatomic) SAUIImageResource *image;
@property (copy, nonatomic) NSURL *lowresTrailerUri;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSString *utsId;

+ (id)playTrailer;
+ (id)playTrailerWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;

@end
