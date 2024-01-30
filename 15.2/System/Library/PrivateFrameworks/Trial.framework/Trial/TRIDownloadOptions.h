@class NSObject;
@protocol OS_xpc_object;

@interface TRIDownloadOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (readonly, nonatomic) unsigned long long requiredCapability;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) BOOL allowsBatteryUsage;
@property (nonatomic) unsigned long long discretionaryBehavior;

+ (id)inexpensiveOptions;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)serializeToPersistedBehavior;
- (id)initWithAllowsCellular:(BOOL)a0 discretionaryBehavior:(unsigned long long)a1;
- (unsigned long long)hash;
- (id)initFromPersistedBehavior:(id)a0;

@end
