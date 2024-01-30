@class NSString;

@interface MFPFont : NSObject {
    float mSize;
    int mUnit;
    unsigned int mFlags;
    NSString *mName;
}

- (int)unit;
- (void)setFlags:(unsigned int)a0;
- (unsigned int)flags;
- (void)setUnit:(int)a0;
- (void)setSize:(float)a0;
- (void)setName:(id)a0;
- (float)size;
- (void).cxx_destruct;
- (id)name;
- (struct __CTFont { } *)createCTFontWithGraphics:(id)a0;

@end
