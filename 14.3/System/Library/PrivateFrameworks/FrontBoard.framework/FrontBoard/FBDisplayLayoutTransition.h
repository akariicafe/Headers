@class NSString, FBMainDisplayLayoutPublisher;
@protocol BSInvalidatable;

@interface FBDisplayLayoutTransition : NSObject {
    FBMainDisplayLayoutPublisher *_publisher;
    id<BSInvalidatable> _transition;
}

@property (readonly, nonatomic) long long displayType;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic, getter=isTransitioning) BOOL transitioning;
@property (copy, nonatomic) NSString *transitionReason;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic) long long backlightLevel;

+ (void)flushLayoutForDisplayType:(long long)a0;
+ (id)layoutForDisplayType:(long long)a0;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)beginTransition;
- (void)endTransition;
- (id)description;
- (id)initWithDisplayType:(long long)a0 name:(id)a1;

@end
