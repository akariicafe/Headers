@class NSUUID;

@interface UIViewPropertyAnimatorTrackingState : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (nonatomic) BOOL startPaused;
@property (nonatomic) BOOL scrubsLinearly;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL optimizationsEnabled;
@property (nonatomic) BOOL shouldLayoutSubviews;

- (id)init;
- (void).cxx_destruct;

@end
