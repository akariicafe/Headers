@class NSObject;
@protocol OS_xpc_object;

@interface TRIDownloadOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSObject<OS_xpc_object> *activity;
@property (nonatomic) BOOL allowsCellularAccess;
@property (nonatomic) unsigned long long discretionaryBehavior;

+ (id)defaultOptions;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initFromPersistedBehavior:(id)a0;
- (id)serializeToPersistedBehavior;
- (void)encodeWithCoder:(id)a0;

@end
