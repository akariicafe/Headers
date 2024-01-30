@class NSString;

@interface ManagedNoticePrivacyPreference : NSManagedObject

@property (nonatomic) int state;
@property (nonatomic, copy) NSString *version;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
