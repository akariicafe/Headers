@interface FCRecordSourceFetchContext : NSObject

@property (nonatomic) BOOL refresh;
@property (nonatomic) unsigned long long cachePolicy;
@property (nonatomic) double maxCachedAge;

@end
