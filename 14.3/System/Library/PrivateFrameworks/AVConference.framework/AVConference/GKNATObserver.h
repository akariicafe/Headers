@class NSObject;
@protocol GKNATObserverDelegate;

@interface GKNATObserver : NSObject

@property NSObject<GKNATObserverDelegate> *delegate;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)initWithOptions:(id)a0;
- (int)currentNATType;
- (void)shouldTryNATCheck;

@end
