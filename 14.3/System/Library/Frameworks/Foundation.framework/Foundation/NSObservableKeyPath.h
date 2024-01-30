@class NSString;
@protocol NSObservable;

@interface NSObservableKeyPath : NSBoundKeyPath <NSObservable>

@property (readonly) id<NSObservable> changes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
