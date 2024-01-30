@class NSString, CLSManagedPublicEvent;

@interface CLSManagedPublicEventCategory : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (retain, nonatomic) NSString *category;
@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *localizedSubcategories;
@property (retain, nonatomic) CLSManagedPublicEvent *event;

@end
