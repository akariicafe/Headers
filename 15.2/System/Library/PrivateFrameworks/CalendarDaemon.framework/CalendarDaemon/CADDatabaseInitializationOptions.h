@class NSString, NSURL, CADChangeTrackingClientId;

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int databaseInitOptions;
@property (retain, nonatomic) CADChangeTrackingClientId *changeTrackingClientId;
@property (nonatomic) BOOL enablePropertyModificationLogging;
@property (nonatomic) int management;
@property (retain, nonatomic) NSString *managementBundleIdentifier;
@property (retain, nonatomic) NSURL *databaseDirectory;
@property (nonatomic) BOOL unitTesting;
@property (nonatomic) BOOL spotlightTesting;
@property (nonatomic) BOOL allowDelegateSources;

- (void)encodeWithCoder:(id)a0;
- (id)validOptionsForConnection:(id)a0;
- (BOOL)isEqualToOptions:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;

@end
