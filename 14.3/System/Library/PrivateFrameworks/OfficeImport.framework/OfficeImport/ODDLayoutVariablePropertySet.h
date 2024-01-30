@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    BOOL mHasDirection;
}

+ (id)defaultProperties;

- (void)setDirection:(int)a0;
- (int)direction;
- (id)description;
- (BOOL)hasDirection;
- (id)initWithDefaults;

@end
