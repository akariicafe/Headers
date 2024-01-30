@class NSMutableDictionary;

@interface OSALogCounterObject : NSObject

@property (nonatomic) unsigned long long count;
@property (readonly) NSMutableDictionary *signatures;

+ (id)masterCounts;
+ (id)counter;

- (id)init;
- (void).cxx_destruct;
- (id)description;

@end
