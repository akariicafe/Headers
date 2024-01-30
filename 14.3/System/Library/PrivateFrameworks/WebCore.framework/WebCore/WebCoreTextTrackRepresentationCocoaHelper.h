@class NSString;

@interface WebCoreTextTrackRepresentationCocoaHelper : NSObject <CALayerDelegate> {
    struct TextTrackRepresentationCocoa { void /* function */ **x0; struct GenericTaskQueue<WebCore::Timer> { struct WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer>, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x0; struct UniqueRef<WebCore::TaskDispatcher<WebCore::Timer> > { struct unique_ptr<WebCore::TaskDispatcher<WebCore::Timer>, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { struct __compressed_pair<WebCore::TaskDispatcher<WebCore::Timer> *, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { struct TaskDispatcher<WebCore::Timer> *x0; } x0; } x0; } x1; unsigned int x2; BOOL x3; } x1; struct TextTrackRepresentationClient *x2; struct RetainPtr<CALayer> { void *x0; } x3; struct RetainPtr<WebCoreTextTrackRepresentationCocoaHelper> { void *x0; } x4; } *_parent;
}

@property struct TextTrackRepresentationCocoa { void /* function */ **x0; struct GenericTaskQueue<WebCore::Timer> { struct WeakPtrFactory<WebCore::GenericTaskQueue<WebCore::Timer>, WTF::EmptyCounter> { struct RefPtr<WTF::WeakPtrImpl<WTF::EmptyCounter>, WTF::DumbPtrTraits<WTF::WeakPtrImpl<WTF::EmptyCounter> > > { struct WeakPtrImpl<WTF::EmptyCounter> *x0; } x0; } x0; struct UniqueRef<WebCore::TaskDispatcher<WebCore::Timer> > { struct unique_ptr<WebCore::TaskDispatcher<WebCore::Timer>, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { struct __compressed_pair<WebCore::TaskDispatcher<WebCore::Timer> *, std::__1::default_delete<WebCore::TaskDispatcher<WebCore::Timer> > > { struct TaskDispatcher<WebCore::Timer> *x0; } x0; } x0; } x1; unsigned int x2; BOOL x3; } x1; struct TextTrackRepresentationClient *x2; struct RetainPtr<CALayer> { void *x0; } x3; struct RetainPtr<WebCoreTextTrackRepresentationCocoaHelper> { void *x0; } x4; } *parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
