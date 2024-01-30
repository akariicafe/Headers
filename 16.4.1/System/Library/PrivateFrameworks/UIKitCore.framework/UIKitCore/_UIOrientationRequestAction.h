@interface _UIOrientationRequestAction : BSAction

@property (readonly, nonatomic) unsigned long long requestedInterfaceOrientationMask;
@property (readonly, nonatomic) unsigned long long policy;

- (id)keyDescriptionForSetting:(unsigned long long)a0;
- (long long)UIActionType;
- (id)initWithRequestedInterfaceOrientationMask:(unsigned long long)a0 callbackQueue:(id)a1 completion:(id /* block */)a2;
- (id)initWithRequestedInterfaceOrientationMask:(unsigned long long)a0 completion:(id /* block */)a1;
- (id)initWithRequestedInterfaceOrientationMask:(unsigned long long)a0 policy:(unsigned long long)a1 callbackQueue:(id)a2 completion:(id /* block */)a3;
- (id)settings:(id)a0 valueDescriptionForFlag:(long long)a1 object:(id)a2 ofSetting:(unsigned long long)a3;

@end
