@class REMObjectID;

@interface REMAccountTypeHost : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) REMObjectID *accountObjectID;

- (id)internalDescription;
- (BOOL)isCloudBased;
- (BOOL)isCloudKit;
- (BOOL)isNonPrimaryCloudKit;
- (BOOL)isLocalInternal;
- (id)initWithType:(long long)a0;
- (BOOL)isPrimaryCloudKit;
- (BOOL)isValid;
- (BOOL)isCalDav;
- (BOOL)isEqual:(id)a0;
- (BOOL)isExchange;
- (unsigned long long)hash;
- (BOOL)isLocal;
- (id)description;
- (long long)_accountType;
- (void).cxx_destruct;

@end
