@class NSString;
@protocol NFCallbackRegistration, NFRegistrationContainer;

@interface NFContainerRegistry : NSObject <NFContainerRegistry>

@property (readonly, nonatomic) id<NFRegistrationContainer> publicContainer;
@property (readonly, nonatomic) id<NFRegistrationContainer> privateContainer;
@property (readonly, nonatomic) id swiftContainer;
@property (readonly, nonatomic) id bridgedContainer;
@property (readonly, nonatomic) id<NFCallbackRegistration> callback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithPublicContainer:(id)a0 privateContainer:(id)a1 bridgedContainer:(id)a2 callback:(id)a3;

@end
