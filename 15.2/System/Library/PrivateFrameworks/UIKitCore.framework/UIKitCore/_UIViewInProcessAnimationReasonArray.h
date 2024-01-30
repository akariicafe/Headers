@interface _UIViewInProcessAnimationReasonArray : NSObject {
    unsigned int *_reasons;
    unsigned int _reasonCount;
}

+ (void)applyReasons:(id)a0 toDisplayLink:(id)a1;

- (id)initWithSet:(id)a0;
- (void)dealloc;

@end
