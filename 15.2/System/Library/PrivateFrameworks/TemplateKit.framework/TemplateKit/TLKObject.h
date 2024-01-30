@class NSString;
@protocol TLKObserver;

@interface TLKObject : NSObject <TLKObservable, TLKObserver>

@property (weak) id<TLKObserver> observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) long long batchUpdateCount;

- (void).cxx_destruct;
- (void)propertiesDidChange;

@end
