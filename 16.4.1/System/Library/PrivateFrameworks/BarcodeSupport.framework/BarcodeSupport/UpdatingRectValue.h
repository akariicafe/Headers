@interface UpdatingRectValue : NSValue {
    id /* block */ _updateBlock;
}

- (id)initWithUpdateBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })CGRectValue;

@end
