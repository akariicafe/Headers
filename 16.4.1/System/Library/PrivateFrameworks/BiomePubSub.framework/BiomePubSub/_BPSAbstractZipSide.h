@class NSString, _BPSAbstractZip;

@interface _BPSAbstractZipSide : NSObject <BPSSubscriber>

@property (retain, nonatomic) _BPSAbstractZip *zip;
@property (nonatomic) long long index;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)receiveInput:(id)a0;
- (void)receiveCompletion:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithIndex:(long long)a0 zip:(id)a1;

@end
