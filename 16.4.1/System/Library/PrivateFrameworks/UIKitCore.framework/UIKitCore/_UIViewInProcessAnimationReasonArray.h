@interface _UIViewInProcessAnimationReasonArray : NSObject {
    unsigned int *_reasons;
    unsigned int _reasonCount;
}

+ (void)applyReasons:(id)a0 toDisplayLink:(id)a1;

- (void)dealloc;
- (id)initWithSet:(id)a0;

@end
