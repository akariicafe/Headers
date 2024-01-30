@class NSArray;

@interface ASDCreatePlaceholdersRequestOptions : ASDRequestOptions

@property (nonatomic) BOOL completeDataPromise;
@property (nonatomic) BOOL createAsMobileBackup;
@property (readonly, nonatomic) NSArray *items;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithApplicationMetadata:(id)a0;

@end
