@class NSMutableArray;

@interface OADPath : NSObject {
    struct CGSize { double width; double height; } mSize;
    NSMutableArray *mElements;
    int mFillMode;
    BOOL mStroked;
}

- (void)setFillMode:(int)a0;
- (int)fillMode;
- (id)init;
- (void).cxx_destruct;
- (void)addElement:(id)a0;
- (id)elementAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })size;
- (unsigned long long)elementCount;
- (id)description;
- (void)setSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)stroked;
- (void)setStroked:(BOOL)a0;

@end
