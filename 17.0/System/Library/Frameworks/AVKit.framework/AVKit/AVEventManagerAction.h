@class NSString;

@interface AVEventManagerAction : NSObject

@property (readonly, nonatomic) NSString *event;

+ (id)actionWithBlock:(id /* block */)a0 event:(id)a1;
+ (id)actionWithTarget:(id)a0 selector:(SEL)a1 event:(id)a2;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)sendAction:(id)a0;
- (BOOL)hasMatchingEvent:(id)a0;
- (BOOL)hasMatchingTarget:(id)a0 withSelector:(SEL)a1 forEvent:(id)a2;

@end
