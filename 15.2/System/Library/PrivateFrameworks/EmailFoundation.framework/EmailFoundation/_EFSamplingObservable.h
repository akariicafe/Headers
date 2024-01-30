@protocol EFObservable;

@interface _EFSamplingObservable : EFObservable {
    id<EFObservable> _observable;
    id<EFObservable> _sampler;
}

- (void).cxx_destruct;
- (id)subscribe:(id)a0;
- (id)initWithObservable:(id)a0 sampler:(id)a1;

@end
