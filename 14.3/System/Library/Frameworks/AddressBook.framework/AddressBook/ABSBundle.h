@class NSBundle;

@interface ABSBundle : NSObject

@property (readonly, nonatomic) NSBundle *backingBundle;

- (id)init;
- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (Class)classNamed:(id)a0;
- (BOOL)respondsToSelector:(SEL)a0;
- (id)initWithBackingBundle:(id)a0;

@end
