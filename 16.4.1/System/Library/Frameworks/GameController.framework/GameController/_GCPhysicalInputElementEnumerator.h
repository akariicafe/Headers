@class GCPhysicalInputElementCollection;

@interface _GCPhysicalInputElementEnumerator : NSEnumerator {
    GCPhysicalInputElementCollection *_collection;
    unsigned long long _currentIndex;
}

- (id)nextObject;
- (id)init;
- (void).cxx_destruct;

@end
