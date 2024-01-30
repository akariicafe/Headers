@class NSString, NSUUID, NSDate;

@interface AXSS_PunctuationEntry : NSManagedObject

@property (copy, nonatomic) NSString *ckChangeTag;
@property (copy, nonatomic) NSDate *ckRecordProcessDate;
@property (copy, nonatomic) NSUUID *groupUUID;
@property (nonatomic) BOOL inCloud;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSString *punctuation;
@property (copy, nonatomic) NSString *replacement;
@property (copy, nonatomic) NSString *rule;
@property (copy, nonatomic) NSUUID *uuid;
@property (nonatomic) short version;

+ (id)fetchRequest;

@end
