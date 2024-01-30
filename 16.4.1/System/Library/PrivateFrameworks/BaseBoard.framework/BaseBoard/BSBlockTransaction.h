@class NSString;

@interface BSBlockTransaction : BSTransaction {
    id /* block */ _block;
}

@property (copy, nonatomic) NSString *debugName;

- (void)_begin;
- (id)_descriptionProem;
- (BOOL)_canBeInterrupted;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_graphNodeDebugName;

@end
