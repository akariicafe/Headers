@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    BOOL mHasDirection;
}

+ (id)defaultProperties;

- (void)setDirection:(int)a0;
- (id)initWithDefaults;
- (id)description;
- (int)direction;
- (BOOL)hasDirection;

@end
