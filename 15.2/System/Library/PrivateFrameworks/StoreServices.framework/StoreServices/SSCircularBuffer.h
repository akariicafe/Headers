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

- (id)flush;
- (id)allObjects;
- (id)description;
- (id)initWithMaxSize:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)_flush;
- (void)addObject:(id)a0;

@end
