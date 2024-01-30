@class NSString, CLSManagedPublicEvent;

@interface CLSManagedPublicEventPerformer : NSManagedObject

@property (class, readonly, nonatomic) NSString *entityName;

@property (retain, nonatomic) NSString *localizedName;
@property (retain, nonatomic) NSString *iTunesIdentifier;
@property (retain, nonatomic) CLSManagedPublicEvent *publicEvent;

@end
