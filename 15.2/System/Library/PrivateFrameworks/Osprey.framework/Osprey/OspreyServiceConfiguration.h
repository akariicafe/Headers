@class OspreyConnectionPool;

@interface OspreyServiceConfiguration : NSObject

@property (readonly) OspreyConnectionPool *connectionPool;

+ (id)sharedConfiguration;

- (void).cxx_destruct;
- (id)init;

@end
