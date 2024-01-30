@class NSString;
@protocol TFRegistrationContainer, TFCallbackRegistration;

@interface TFContainerRegistry : NSObject <TFContainerRegistry>

@property (readonly, nonatomic) id<TFRegistrationContainer> publicContainer;
@property (readonly, nonatomic) id<TFRegistrationContainer> privateContainer;
@property (readonly, nonatomic) id swiftContainer;
@property (readonly, nonatomic) id bridgedContainer;
@property (readonly, nonatomic) id<TFCallbackRegistration> callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPublicContainer:(id)a0 privateContainer:(id)a1 bridgedContainer:(id)a2 callback:(id)a3;

@end
