@class NSMutableSet;

@interface _CNLazyArrayOperatorDistinct : _CNLazyArrayOperator {
    NSMutableSet *_seenValues;
}

- (id)nextObject;
- (id)initWithInput:(id)a0;
- (void).cxx_destruct;

@end
