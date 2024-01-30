@class NSString, NSUUID;

@interface AXSS_PunctuationCloudDeletionCache : NSManagedObject

@property (copy, nonatomic) NSString *entityType;
@property (copy, nonatomic) NSUUID *uuid;

+ (id)fetchRequest;

@end
