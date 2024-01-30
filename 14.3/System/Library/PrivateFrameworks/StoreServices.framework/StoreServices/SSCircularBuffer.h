@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SSCircularBuffer : NSObject {
    unsigned long long _maxSize;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *accessQueue;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) NSMutableArray *buffer;
@property (readonly, nonatomic) unsigned long long count;
@property (nonatomic) unsigned long long maxSize;

+ (id)_rearrangeObjects:(id)a0 forCurrentIndex:(unsigned long long)a1;

- (id)_flush;
- (id)init;
- (void).cxx_destruct;
- (id)initWithMaxSize:(unsigned long long)a0;
- (id)description;
- (id)flush;
- (void)addObject:(id)a0;
- (id)allObjects;

@end
