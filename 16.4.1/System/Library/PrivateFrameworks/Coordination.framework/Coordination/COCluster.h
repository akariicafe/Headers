@class NSString, COClusterConfiguration;

@interface COCluster : NSObject <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly, nonatomic) COCluster *homeCluster;
@property (class, readonly, nonatomic) COCluster *zoneCluster;
@property (class, readonly, nonatomic) COCluster *roomCluster;
@property (class, readonly, nonatomic) COCluster *groupCluster;
@property (class, readonly, nonatomic) COCluster *pairCluster;
@property (class, readonly, nonatomic) COCluster *activityGroupCluster;
@property (class, readonly, nonatomic) COCluster *dynamicGroupCluster;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) COClusterConfiguration *configuration;
@property (readonly, copy, nonatomic) NSString *format;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) id /* block */ updateHandler;
@property (readonly, nonatomic) BOOL updateHandlerInvoked;

+ (id)_allowedClusterClasses;
+ (id)_clusterForCluster:(id)a0;
+ (id)_createTemplateFromConfiguration:(id)a0;
+ (id)clusterNameWithHomeKitHome:(id)a0;
+ (id)clusterWithConfiguration:(id)a0;
+ (id)homeClusterForHomeKitHome:(id)a0;
+ (id)inferClusterLabelFromCluster:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_withLock:(id /* block */)a0;
- (void)activate:(id /* block */)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (void)_updateIdentifier;
- (void)_handleRealmUpdate:(id)a0;
- (id)_initWithConfiguration:(id)a0 format:(id)a1 label:(id)a2;
- (void)_invokeUpdateHandler;
- (BOOL)_isEqualToCluster:(id)a0;

@end
