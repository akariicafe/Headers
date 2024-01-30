@class NSError;

@interface CNObservableEvent : NSObject

@property (readonly, nonatomic) unsigned long long eventType;
@property (readonly, nonatomic) BOOL hasValue;
@property (readonly, nonatomic) id value;
@property (readonly, copy, nonatomic) NSError *error;

+ (id)completionEvent;
+ (id)eventWithResult:(id)a0;
+ (id)failureEventWithError:(id)a0;

- (void)dematerializeWithObserver:(id)a0;

@end
