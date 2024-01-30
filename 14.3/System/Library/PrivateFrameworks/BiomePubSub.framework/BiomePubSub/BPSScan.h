@class BPSPublisher, NSString;

@interface BPSScan : BPSPublisher <BPSPublisher>

@property (readonly, nonatomic) BPSPublisher *upstream;
@property (readonly, nonatomic) id initialResult;
@property (readonly, copy, nonatomic) id /* block */ nextPartialResult;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)subscribe:(id)a0;
- (void).cxx_destruct;
- (id)initWithUpstream:(id)a0 initialResult:(id)a1 nextPartialResult:(id /* block */)a2;

@end
