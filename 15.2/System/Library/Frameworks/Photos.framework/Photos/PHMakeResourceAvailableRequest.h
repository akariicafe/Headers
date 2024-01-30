@protocol PLResourceIdentity;

@interface PHMakeResourceAvailableRequest : PHResourceRequest

@property (readonly, nonatomic) id<PLResourceIdentity> resourceIdentity;
@property (nonatomic, getter=isTransient) BOOL transient;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed;
@property (nonatomic) long long downloadIntent;
@property (nonatomic) long long downloadPriority;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithTaskIdentifier:(id)a0 assetObjectID:(id)a1 resource:(id)a2;

@end
