@class NSString;

@interface SwiftUI.UserActivityTrackingInfo : NSObject <NSUserActivityDelegate> {
    void /* unknown type, empty encoding */ userActivity;
    void /* unknown type, empty encoding */ handlers;
    void /* unknown type, empty encoding */ sceneBridge;
    void /* unknown type, empty encoding */ activityType;
}

@property (nonatomic, readonly) NSString *description;

- (void)userActivityWillSave:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
