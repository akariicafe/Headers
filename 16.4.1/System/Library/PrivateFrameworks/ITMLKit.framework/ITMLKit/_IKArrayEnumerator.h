@class IKArray;

@interface _IKArrayEnumerator : NSEnumerator {
    IKArray *_array;
    long long _currentIndex;
}

- (id)nextObject;
- (id)initWithArray:(id)a0;
- (void).cxx_destruct;

@end
