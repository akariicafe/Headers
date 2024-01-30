@protocol EFObservable;

@interface _EFSamplingObservable : EFObservable {
    id<EFObservable> _observable;
    id<EFObservable> _sampler;
}

- (id)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithObservable:(id)a0 sampler:(id)a1;

@end
