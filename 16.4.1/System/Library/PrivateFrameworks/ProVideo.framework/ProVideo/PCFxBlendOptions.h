@interface PCFxBlendOptions : NSObject <NSCopying> {
    int _mode;
}

- (void)setBlendMode:(int)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)getBlendMode;
- (id)initWithBlendOptions:(id)a0;

@end
