@class PSListController, NSArray, NDOSpecifierDataSource;

@interface NDOACController : NSObject

@property (class, readonly) NDOACController *sharedController;

@property (retain, nonatomic) NDOSpecifierDataSource *ndoSpecifierDataSource;
@property (readonly) NSArray *specifiers;
@property (weak) PSListController *parentViewController;

- (id)init;
- (void).cxx_destruct;
- (void)updateSpecifiersWithCompletionHandler:(id /* block */)a0;
- (void)forceUpdateSpecifiersWithCompletionHandler:(id /* block */)a0;

@end
