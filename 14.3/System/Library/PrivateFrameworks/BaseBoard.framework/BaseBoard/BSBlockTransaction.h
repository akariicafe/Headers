@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (void).cxx_destruct;
- (BOOL)_canBeInterrupted;
- (id)_graphNodeDebugName;
- (id)initWithBlock:(id /* block */)a0;
- (void)_begin;
- (id)_descriptionProem;

@end
