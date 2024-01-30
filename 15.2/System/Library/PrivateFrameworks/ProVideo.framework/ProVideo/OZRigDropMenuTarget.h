@interface OZRigDropMenuTarget : NSObject {
    void *_pRig;
}

+ (id)rigDropMenuTargetForRig:(void *)a0;

- (void)setRig:(void *)a0;
- (void)pasteHelper:(unsigned int)a0;
- (void)pasteToNewSwitch;
- (void)pasteToNewList;
- (void)pasteToNewSlider;

@end
