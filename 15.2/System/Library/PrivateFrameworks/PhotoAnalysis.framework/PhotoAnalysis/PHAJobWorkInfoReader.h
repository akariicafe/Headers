@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject {
    NSMutableArray *_workInfosQueue;
}

@property (nonatomic) unsigned long long fetchLimit;
@property (readonly, nonatomic) unsigned long long queueCount;

- (void).cxx_destruct;
- (id)init;
- (id)workInfoWithCount:(unsigned long long)a0 fetchBlock:(id /* block */)a1;

@end
