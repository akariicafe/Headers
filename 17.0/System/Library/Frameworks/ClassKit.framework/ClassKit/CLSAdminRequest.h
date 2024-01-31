@class NSString, NSDate;

@interface CLSAdminRequest : CLSObject

@property (copy, nonatomic) NSString *organizationID;
@property (nonatomic) long long type;
@property (nonatomic) long long status;
@property (nonatomic) long long approval;
@property (copy, nonatomic) NSString *requestorID;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSDate *dateCompleted;
@property (copy, nonatomic) NSString *responderNote;

+ (BOOL)supportsSecureCoding;
+ (id)stringForStatus:(long long)a0;
+ (long long)typeFromString:(id)a0;
+ (id)stringForType:(long long)a0;
+ (long long)approvalFromString:(id)a0;
+ (id)_propertyNames;
+ (long long)statusFromString:(id)a0;
+ (id)stringForApproval:(long long)a0;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeWithObject:(id)a0;
- (id)initWithType:(long long)a0 requestorEmail:(id)a1 organizationID:(id)a2;
- (id)initWithType:(long long)a0 requestorID:(id)a1 organizationID:(id)a2;

@end
