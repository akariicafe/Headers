@class AMSUniversalLinksConnection;

@interface AMSUniversalLinks : NSObject

@property (retain, nonatomic) AMSUniversalLinksConnection *connection;

+ (id)_connection;
+ (void)update;
+ (id)_privateQueue;

- (void).cxx_destruct;
- (id)init;
- (id)updateUniversalLinks;

@end
