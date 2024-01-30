@class NSString, CADChangeTrackingClientId;

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int databaseInitOptions;
@property (retain, nonatomic) CADChangeTrackingClientId *changeTrackingClientId;
@property (nonatomic) BOOL enablePropertyModificationLogging;
@property (nonatomic) int management;
@property (retain, nonatomic) NSString *managementBundleIdentifier;
@property (retain, nonatomic) NSString *databasePath;
@property (nonatomic) BOOL unitTesting;
@property (nonatomic) BOOL allowDelegateSources;

- (id)init;
- (void).cxx_destruct;
- (id)validOptionsForConnection:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqualToOptions:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
