@class PSListController, NSArray, NSString, NDOSpecifierDataSource;

@interface NDOACController : NSObject

@property (class, readonly) NDOACController *sharedController;

@property (retain, nonatomic) NDOSpecifierDataSource *ndoSpecifierDataSource;
@property BOOL isDefaultDevice;
@property (readonly) NSArray *specifiers;
@property (retain, nonatomic) NSString *specifierIDToInsertAfter;
@property (weak, nonatomic) PSListController *parentViewController;

- (void).cxx_destruct;
- (id)initWithSerialNumber:(id)a0;
- (void)updateSpecifiersWithCompletionHandler:(id /* block */)a0;
- (void)forceUpdateSpecifiersWithCompletionHandler:(id /* block */)a0;

@end
