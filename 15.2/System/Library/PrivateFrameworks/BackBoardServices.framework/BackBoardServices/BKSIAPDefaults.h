@class NSString;

@interface BKSIAPDefaults : BSAbstractDefaultDomain

@property (retain, nonatomic) NSString *videoTVOutSystem;
@property (readonly, nonatomic) NSString *videoTVOutSignal;
@property (readonly, nonatomic) NSString *videoTVOutReservedForIPodOut;
@property (readonly, nonatomic) NSString *videoTVOutReservedForRemoteUI;

- (id)init;
- (void)_bindAndRegisterDefaults;

@end
