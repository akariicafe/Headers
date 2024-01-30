@interface WebUndoStep : NSObject {
    struct RefPtr<WebCore::UndoStep, WTF::DumbPtrTraits<WebCore::UndoStep> > { struct UndoStep *m_ptr; } m_step;
}

+ (void)initialize;
+ (id)stepWithUndoStep:(struct Ref<WebCore::UndoStep, WTF::DumbPtrTraits<WebCore::UndoStep> > { struct UndoStep *x0; } *)a0;

- (struct UndoStep { void /* function */ **x0; unsigned int x1; } *)step;
- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithUndoStep:(struct Ref<WebCore::UndoStep, WTF::DumbPtrTraits<WebCore::UndoStep> > { struct UndoStep *x0; } *)a0;

@end
