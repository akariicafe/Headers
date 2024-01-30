@class NSMutableDictionary;

@interface OSALogCounterObject : NSObject

@property (nonatomic) unsigned long long count;
@property (readonly) NSMutableDictionary *signatures;

+ (id)counter;
+ (id)masterCounts;

- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
