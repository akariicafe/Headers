@class NSEnumerator;

@interface TRIPeekEnumerator : NSObject {
    NSEnumerator *_underlyingEnum;
    id _peek;
}

- (id)nextObject;
- (id)initWithEnumerator:(id)a0;
- (void).cxx_destruct;
- (id)peekNextObject;

@end
