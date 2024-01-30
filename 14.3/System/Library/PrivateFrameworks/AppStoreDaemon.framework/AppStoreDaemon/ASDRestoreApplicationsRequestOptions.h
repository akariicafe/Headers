@class NSArray;

@interface ASDRestoreApplicationsRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL completeDataPromise;
@property (nonatomic) BOOL createsPlaceholders;
@property (nonatomic) BOOL createAsMobileBackup;
@property (nonatomic) BOOL restoreApplicationData;
@property (readonly, nonatomic) NSArray *items;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithApplicationMetadata:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
