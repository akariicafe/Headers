@class NSMutableDictionary;

@interface OSALogCounterObject : NSObject

@property (nonatomic) unsigned long long count;
@property (readonly) NSMutableDictionary *signatures;

+ (id)counter;
+ (id)masterCounts;

- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
