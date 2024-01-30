@class EKObjectID, NSString, NSURL;

@interface EKNotification : EKObject

@property (readonly, nonatomic) EKObjectID *objectID;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSURL *hostURL;

+ (id)knownRelationshipSingleValueKeys;
+ (Class)frozenClass;

- (BOOL)save:(id *)a0;
- (id)calendar;

@end
