@class OADColor;

@interface OADFontReference : NSObject <NSCopying> {
    int mIndex;
    OADColor *mColor;
}

- (void)setIndex:(int)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)index;
- (unsigned long long)hash;
- (id)color;
- (id)description;
- (void)setColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)applyToParagraphProperties:(id)a0;

@end
