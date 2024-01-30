@class HMMediaSession, NSString;
@protocol _HMMediaProfileDelegate;

@interface _HMMediaProfile : _HMAccessoryProfile

@property (weak) id<_HMMediaProfileDelegate> delegate;
@property (retain) HMMediaSession *mediaSession;
@property (readonly) NSString *routeUID;
@property (nonatomic) unsigned long long capability;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)setRouteUID:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleRuntimeStateUpdate:(id)a0;
- (void)__configureWithContext:(id)a0 accessory:(id)a1;
- (void)_notifyDelegateOfUpdatedMediaSession:(id)a0;

@end
