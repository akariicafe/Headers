@class NSMutableArray;

@interface OADPath : NSObject {
    struct CGSize { double width; double height; } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}

- (void)addElement:(id)a0;
- (struct CGSize { double x0; double x1; })size;
- (id)description;
- (id)elementAtIndex:(unsigned long long)a0;
- (void)setFillMode:(int)a0;
- (void).cxx_destruct;
- (id)init;
- (int)fillMode;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)elementCount;
- (BOOL)stroked;
- (void)setStroked:(BOOL)a0;

@end
