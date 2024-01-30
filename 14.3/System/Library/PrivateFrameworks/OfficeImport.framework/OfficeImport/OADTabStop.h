@interface OADTabStop : NSObject {
    unsigned char mAlign;
    int mPosition;
}

- (int)position;
- (unsigned char)align;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)setPosition:(int)a0;
- (void)setAlign:(unsigned char)a0;

@end
