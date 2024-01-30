@interface OADShapeProperties : OADGraphicProperties {
    BOOL mIsTextBox;
}

+ (id)defaultProperties;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isTextBox;
- (void)setIsTextBox:(BOOL)a0;

@end
