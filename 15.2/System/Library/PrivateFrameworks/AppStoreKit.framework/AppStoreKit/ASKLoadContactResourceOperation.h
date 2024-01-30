@class NSString, CNAvatarImageRenderer;

@interface ASKLoadContactResourceOperation : ASKLoadResourceOperation

@property (retain, nonatomic) CNAvatarImageRenderer *monogrammer;
@property (readonly, copy, nonatomic) NSString *contactId;

+ (id)supportedScheme;
+ (double)mainScreenScale;

- (void)main;
- (void).cxx_destruct;
- (id)initWithURLRequest:(id)a0 dataConsumer:(id)a1;
- (id)makeFetchError;
- (id)initWithContactId:(id)a0;
- (id)makePlatformUnsupportedError;

@end
