@class AMSUniversalLinksConnection;

@interface AMSUniversalLinks : NSObject

@property (retain, nonatomic) AMSUniversalLinksConnection *connection;

+ (void)update;
+ (id)_connection;
+ (id)_privateQueue;

- (id)init;
- (void).cxx_destruct;
- (id)updateUniversalLinks;

@end
