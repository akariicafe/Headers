@class NSString, REMObjectID;

@interface REMAttachment : NSObject <NSSecureCoding, NSCopying, REMObjectIDProviding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) REMObjectID *accountID;
@property (readonly, nonatomic) REMObjectID *reminderID;
@property (readonly, nonatomic) NSString *uti;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)initWithAttachment:(id)a0 objectID:(id)a1 accountID:(id)a2 reminderID:(id)a3;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)_deepCopy;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 reminderID:(id)a2 UTI:(id)a3;
- (void)encodeWithCoder:(id)a0;

@end
