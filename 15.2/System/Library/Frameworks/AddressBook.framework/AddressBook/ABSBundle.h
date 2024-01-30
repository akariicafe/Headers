@class NSBundle;

@interface ABSBundle : NSObject

@property (readonly, nonatomic) NSBundle *backingBundle;

- (Class)classNamed:(id)a0;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithBackingBundle:(id)a0;

@end
