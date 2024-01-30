@interface OADTabStop : NSObject {
    unsigned char mAlign;
    int mPosition;
}

- (void)setPosition:(int)a0;
- (int)position;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (unsigned char)align;
- (void)setAlign:(unsigned char)a0;

@end
