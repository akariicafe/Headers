@class NSString, NSData;

@interface EKEventAction : EKObject

@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *externalFolderID;
@property (copy, nonatomic) NSString *externalScheduleID;
@property (copy, nonatomic) NSString *externalModificationTag;
@property (copy, nonatomic) NSData *externalRepresentation;

+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;

@end
