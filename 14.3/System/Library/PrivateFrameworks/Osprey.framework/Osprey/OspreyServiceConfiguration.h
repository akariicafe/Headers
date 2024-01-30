@class OspreyConnectionPool;

@interface OspreyServiceConfiguration : NSObject

@property (readonly) OspreyConnectionPool *connectionPool;

+ (id)sharedConfiguration;

- (id)init;
- (void).cxx_destruct;

@end
