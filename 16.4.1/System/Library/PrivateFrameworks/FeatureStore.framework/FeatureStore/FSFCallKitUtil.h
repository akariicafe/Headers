@class CXCallObserver;

@interface FSFCallKitUtil : NSObject

@property (readonly, nonatomic) CXCallObserver *callCenter;

+ (id)sharedInstance;

- (id)init;
- (BOOL)isOnCall;
- (void).cxx_destruct;

@end
