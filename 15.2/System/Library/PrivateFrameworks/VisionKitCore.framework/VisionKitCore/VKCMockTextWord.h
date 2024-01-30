@class NSString, VKQuad;

@interface VKCMockTextWord : NSObject

@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) VKQuad *quad;

- (void).cxx_destruct;
- (id)initWithWordsDictionary:(id)a0;

@end
