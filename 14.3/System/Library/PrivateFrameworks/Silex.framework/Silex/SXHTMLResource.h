@class NSString, NSURL;

@interface SXHTMLResource : SXResource <SXHTMLResource>

@property (readonly, nonatomic) NSString *HTML;
@property (readonly, nonatomic) NSURL *baseURL;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSURL *URL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


@end
