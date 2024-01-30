@class IKArray;

@interface _IKArrayEnumerator : NSEnumerator {
    IKArray *_array;
    long long _currentIndex;
}

- (void).cxx_destruct;
- (id)nextObject;
- (id)initWithArray:(id)a0;

@end
