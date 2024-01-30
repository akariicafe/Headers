@class NSMutableArray, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface TSUIndexedStringStore : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_indexByString;
    NSMutableArray *_stringByIndex;
}

- (id)init;
- (void)dealloc;
- (unsigned long long)count;
- (unsigned long long)indexForString:(id)a0;
- (id)stringForIndex:(unsigned long long)a0;

@end
