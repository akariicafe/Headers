@interface OADTabStop : NSObject {
    unsigned char mAlign;
    int mPosition;
}

- (void)setPosition:(int)a0;
- (int)position;
- (unsigned char)align;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)setAlign:(unsigned char)a0;

@end
