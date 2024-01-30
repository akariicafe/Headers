@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *emailAddresses;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addEmailAddress:(id)a0;

@end
