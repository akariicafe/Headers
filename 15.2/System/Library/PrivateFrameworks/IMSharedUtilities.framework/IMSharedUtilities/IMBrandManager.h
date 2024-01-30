@class BSUIBrandManager;

@interface IMBrandManager : NSObject

@property (retain, nonatomic) BSUIBrandManager *brandManager;

+ (id)sharedInstance;

- (void)brandWithURI:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)_init;

@end
