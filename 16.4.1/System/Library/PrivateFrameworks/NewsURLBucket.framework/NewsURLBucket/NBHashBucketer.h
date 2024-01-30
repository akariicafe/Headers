@class NBObjCHashBucketer;

@interface NBHashBucketer : NSObject

@property (readonly, nonatomic) NBObjCHashBucketer *bucketer;

- (unsigned long long)bucketForHash:(id)a0 bucketCount:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
