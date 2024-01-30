@interface MFPRedEyeCorrectionEffect : MFPEffect {
    void *mAreas;
}

+ (id)GUID;

- (void)dealloc;
- (id)initWithAreas:(const void *)a0;

@end
