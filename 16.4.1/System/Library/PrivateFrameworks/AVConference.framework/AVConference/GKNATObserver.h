@class NSObject;
@protocol GKNATObserverDelegate;

@interface GKNATObserver : NSObject

@property NSObject<GKNATObserverDelegate> *delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (void)shouldTryNATCheck;
- (int)currentNATType;
- (id)initWithOptions:(id)a0;

@end
