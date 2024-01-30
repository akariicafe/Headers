@interface NSMapObservationTransformer : NSObservationTransformer {
    id _block;
    int _tag;
}

- (void)_receiveBox:(id)a0;
- (void)dealloc;
- (id)initWithBlock:(id)a0 tag:(int)a1;

@end
