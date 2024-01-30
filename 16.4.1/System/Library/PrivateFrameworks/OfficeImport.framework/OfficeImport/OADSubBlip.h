@class NSData;

@interface OADSubBlip : OCDDelayedMedia {
    int mType;
    NSData *mData;
    struct CGSize { double width; double height; } mSizeInPoints;
    int mSizeInBytes;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } mFrame;
}

- (void)setData:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frame;
- (int)sizeInBytes;
- (int)type;
- (id)data;
- (BOOL)isLoaded;
- (BOOL)isEqual:(id)a0;
- (void)setType:(int)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned long long)hash;
- (void).cxx_destruct;
- (id)initWithData:(id)a0 type:(int)a1;
- (void)setSizeInBytes:(int)a0;
- (struct CGSize { double x0; double x1; })sizeInPoints;
- (void)setSizeInPoints:(struct CGSize { double x0; double x1; })a0;

@end
