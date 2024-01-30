@class NSRecursiveLock, NSString, NSUUID, DIOneshotTimer, NSDate, DIXPCConnectionManager;
@protocol DIDeviceDelegate;

@interface DIDevice : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) DIXPCConnectionManager *connectionManager;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSUUID *homeKitIdentifier;
@property (copy, nonatomic) NSUUID *homeKitHomeIdentifier;
@property (copy, nonatomic) NSUUID *idsIdentifier;
@property (nonatomic) long long state;
@property (copy, nonatomic) NSString *stateReason;
@property (copy, nonatomic) NSDate *stateExpiration;
@property (nonatomic) BOOL isCurrentDevice;
@property (retain) DIOneshotTimer *timer;
@property (readonly) NSRecursiveLock *lock;
@property (weak, nonatomic) id<DIDeviceDelegate> delegate;

+ (id)stringForDeviceState:(long long)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)refreshStateWithCompletionHandler:(id /* block */)a0;
- (void)notifyDeviceDidChange;
- (void)notifyDidUpdateState;
- (void)updateState:(long long)a0 reason:(id)a1 completionHandler:(id /* block */)a2;
- (void)updateWithDevice:(id)a0 updateState:(BOOL)a1;

@end
