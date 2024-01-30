@class NSArray;

@interface NEAccountIdentifiers : NSObject

@property (copy) NSArray *mailAccountIdentifiers;
@property (copy) NSArray *calendarAccountIdentifiers;
@property (copy) NSArray *contactsAccountIdentifiers;

- (void).cxx_destruct;

@end
