@class NSString, REMObjectID;

@interface REMAlarmTrigger : NSObject <REMObjectIDProviding, NSSecureCoding>

@property (class, readonly, nonatomic) NSString *cdEntityName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) REMObjectID *objectID;
@property (readonly, nonatomic) BOOL isTemporal;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)objectIDWithUUID:(id)a0;
+ (id)newObjectID;

- (void)encodeWithCoder:(id)a0;
- (id)_deepCopy;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithObjectID:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithAlarmTrigger:(id)a0 objectID:(id)a1;
- (BOOL)isContentEqual:(id)a0;

@end
