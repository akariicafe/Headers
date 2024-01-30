@interface OADShapeProperties : OADGraphicProperties {
    BOOL mIsTextBox;
}

+ (id)defaultProperties;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isTextBox;
- (void)setIsTextBox:(BOOL)a0;

@end
