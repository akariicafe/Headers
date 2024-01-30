@interface PCFxBlendOptions : NSObject <NSCopying> {
    int _mode;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setBlendMode:(int)a0;
- (int)getBlendMode;
- (id)initWithBlendOptions:(id)a0;

@end
