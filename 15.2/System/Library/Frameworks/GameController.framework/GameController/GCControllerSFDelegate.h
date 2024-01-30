@class NSString, NSUserActivity;

@interface GCControllerSFDelegate : NSObject <NSUserActivityDelegate> {
    NSUserActivity *_activity;
}

@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
