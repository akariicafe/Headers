@interface FINodeIterator : NSObject {
    struct OpaqueNodeIterator { } *_iterator;
}

@property (readonly, nonatomic) BOOL fullyPopulated;
@property (readonly, nonatomic) unsigned long long estimatedSize;

+ (id)iteratorForFINode:(id)a0 includingInvisibleItems:(BOOL)a1;
+ (id)iteratorForFINode:(id)a0 synchronous:(BOOL)a1 includingInvisibleItems:(BOOL)a2;

- (id)next;
- (id)first;
- (void)dealloc;
- (id)initWithIterator:(struct OpaqueNodeIterator { } *)a0;

@end
