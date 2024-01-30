@class NSString, NSURL;

@interface SAVCSPlayContent : SABaseClientBoundCommand

@property (copy, nonatomic) NSString *contentType;
@property (copy, nonatomic) NSURL *hiresTrailerUri;
@property (copy, nonatomic) NSURL *lowresTrailerUri;
@property (nonatomic) BOOL playTrailer;
@property (copy, nonatomic) NSString *utsId;

+ (id)playContent;
+ (id)playContentWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
