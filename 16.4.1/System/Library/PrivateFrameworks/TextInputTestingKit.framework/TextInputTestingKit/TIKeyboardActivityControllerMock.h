@class NSString;

@interface TIKeyboardActivityControllerMock : NSObject <TIKeyboardActivityControlling>

@property (readonly, nonatomic) unsigned long long activityState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addActivityObserver:(id)a0;
- (void)removeActivityObserver:(id)a0;

@end
