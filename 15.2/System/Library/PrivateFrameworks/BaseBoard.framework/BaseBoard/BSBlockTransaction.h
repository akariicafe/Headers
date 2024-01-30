@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (BOOL)_canBeInterrupted;
- (void)_begin;
- (id)initWithBlock:(id /* block */)a0;
- (id)_descriptionProem;
- (void).cxx_destruct;
- (id)_graphNodeDebugName;

@end
