@class NSString, AMSObservable;

@interface AMSMemoryPressure : NSObject

@property (class, readonly, nonatomic) AMSObservable *observable;
@property (class, readonly, nonatomic) NSString *lastKnownStatus;

+ (void)initialize;
+ (void)unsubscribe:(id)a0;
+ (void)subscribe:(id)a0;
+ (id)_memoryPressureStatusForMemoryPressure:(unsigned int)a0;

@end
