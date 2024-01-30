@interface ODDLayoutVariablePropertySet : OADProperties {
    int mDirection;
    BOOL mHasDirection;
}

+ (id)defaultProperties;

- (int)direction;
- (void)setDirection:(int)a0;
- (id)description;
- (id)initWithDefaults;
- (BOOL)hasDirection;

@end
