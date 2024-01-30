@class NSString;

@interface _IMMemoryCacheItem : NSObject

@property (retain, nonatomic) id item;
@property (nonatomic) unsigned long long cost;
@property (nonatomic) unsigned long long timeStamp;
@property (copy, nonatomic) NSString *key;
@property (nonatomic) BOOL conformsToProtocol;

+ (id)cacheItemWithItem:(id)a0 key:(id)a1 cost:(unsigned long long)a2;

- (void).cxx_destruct;
- (id)description;

@end
