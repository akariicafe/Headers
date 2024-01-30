@interface NSMapObservationTransformer : NSObservationTransformer {
    id _block;
    int _tag;
}

- (id)initWithBlock:(id)a0 tag:(int)a1;
- (void)_receiveBox:(id)a0;
- (void)dealloc;

@end
