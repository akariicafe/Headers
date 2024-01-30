@class MTLBindingInternal;

@interface MTLArgumentInternal : MTLArgument {
    MTLBindingInternal *_binding;
}

- (void)dealloc;
- (id)initWithBinding:(id)a0;

@end
