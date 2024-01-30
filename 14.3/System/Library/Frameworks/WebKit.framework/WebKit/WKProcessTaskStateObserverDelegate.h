@class NSString;

@interface WKProcessTaskStateObserverDelegate : NSObject <BKSProcessDelegate>

@property (copy) id /* block */ taskStateChangedCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)process:(id)a0 taskStateDidChange:(long long)a1;

@end
