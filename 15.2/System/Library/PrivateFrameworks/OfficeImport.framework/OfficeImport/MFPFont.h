@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (int)unit;
- (void)setUnit:(int)a0;
- (void)setName:(id)a0;
- (float)size;
- (unsigned int)flags;
- (void).cxx_destruct;
- (void)setSize:(float)a0;
- (id)name;
- (void)setFlags:(unsigned int)a0;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
