@class NSData, NSNumber;

@interface GKCDContactInfoList : NSManagedObject

@property (retain, nonatomic) NSData *changeHistoryToken;
@property (copy, nonatomic) NSNumber *version;

+ (id)fetchRequest;

@end
