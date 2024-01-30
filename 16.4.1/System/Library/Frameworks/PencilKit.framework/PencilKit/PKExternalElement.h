@interface PKExternalElement : NSObject {
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _boundingBox;
}

@property (readonly, nonatomic) id identifier;
@property (readonly, nonatomic) const struct CGPath { } *path;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } boundingBox;

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 path:(struct CGPath { } *)a1;

@end
