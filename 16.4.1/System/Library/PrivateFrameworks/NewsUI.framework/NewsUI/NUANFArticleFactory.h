@class FCArticleController, NSString;

@interface NUANFArticleFactory : NSObject <NUArticleFactory>

@property (readonly, nonatomic) FCArticleController *articleController;
@property (nonatomic) long long qualityOfService;
@property (nonatomic) long long relativePriority;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
