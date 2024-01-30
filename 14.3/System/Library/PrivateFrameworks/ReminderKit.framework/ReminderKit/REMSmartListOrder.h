@class NSString, NSDate, REMObjectID;

@interface REMSmartListOrder : NSObject <NSCopying, NSSecureCoding, REMObjectIDProviding>

@property (class, readonly) BOOL supportsSecureCoding;
@property (class, readonly, nonatomic) NSString *cdEntityName;

@property (readonly, nonatomic) REMObjectID *objectID;
@property (readonly, retain, nonatomic) REMObjectID *reminderID;
@property (nonatomic) double start;
@property (nonatomic) double end;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) REMObjectID *remObjectID;

+ (id)newObjectID;
+ (id)objectIDWithUUID:(id)a0;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObjectID:(id)a0 reminderID:(id)a1 start:(double)a2 end:(double)a3 lastModifiedDate:(id)a4;
- (id)initWithReminderID:(id)a0 start:(double)a1 end:(double)a2;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)changedKeys;
- (void)encodeWithCoder:(id)a0;

@end
