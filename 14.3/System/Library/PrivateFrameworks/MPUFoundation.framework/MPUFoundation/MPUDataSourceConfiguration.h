@class NSString;

@interface MPUDataSourceConfiguration : NSObject

@property (readonly, nonatomic) Class dataSourceClass;
@property (copy, nonatomic) NSString *dataSourceCachingKey;
@property (copy, nonatomic) id /* block */ defaultQueryCreationBlock;
@property (nonatomic) long long entityType;

+ (id)configurationWithDataSourceClass:(Class)a0;

- (void).cxx_destruct;
- (id)initWithDataSourceClass:(Class)a0;

@end
