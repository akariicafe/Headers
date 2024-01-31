@class NSUUID, NSString, NSDate, NSError, NSManagedObjectID;

@interface NSPersistentCloudKitContainerEvent : NSObject <NSCopying> {
    NSManagedObjectID *_ckEventObjectID;
}

@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *storeIdentifier;
@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) BOOL succeeded;
@property (readonly, nonatomic) NSError *error;

+ (id)eventTypeString:(long long)a0;

- (void)dealloc;
- (id)initWithCKEvent:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
