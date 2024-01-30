@class NBObjCHashBucketer;

@interface NBHashBucketer : NSObject

@property (readonly, nonatomic) NBObjCHashBucketer *bucketer;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)bucketForHash:(id)a0 bucketCount:(unsigned long long)a1;

@end
