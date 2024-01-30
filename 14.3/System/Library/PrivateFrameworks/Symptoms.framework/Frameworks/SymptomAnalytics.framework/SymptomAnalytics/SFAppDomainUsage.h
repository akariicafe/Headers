@class NSString, NSDate, NSNumber, SFApp;

@interface SFAppDomainUsage : NSManagedObject

@property (nonatomic) int effectiveUserId;
@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *domainOwner;
@property (copy, nonatomic) NSDate *firstTimeStamp;
@property (copy, nonatomic) NSNumber *kind;
@property (copy, nonatomic) NSNumber *hits;
@property (copy, nonatomic) NSDate *timeStamp;
@property (retain, nonatomic) SFApp *hasApp;

+ (id)entityName;
+ (id)fetchRequest;

@end
