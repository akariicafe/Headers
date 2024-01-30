@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (void)setUnit:(int)a0;
- (void)setName:(id)a0;
- (void).cxx_destruct;
- (int)unit;
- (float)size;
- (unsigned int)flags;
- (id)name;
- (void)setSize:(float)a0;
- (void)setFlags:(unsigned int)a0;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
