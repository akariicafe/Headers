@class NSString;

@interface CSConcreteUnlockRequest : NSObject <CSUnlockRequest>

@property (copy, nonatomic) NSString *name;
@property (nonatomic) int source;
@property (nonatomic) int intent;
@property (nonatomic) BOOL wantsBiometricPresentation;
@property (nonatomic) BOOL confirmedNotInPocket;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
