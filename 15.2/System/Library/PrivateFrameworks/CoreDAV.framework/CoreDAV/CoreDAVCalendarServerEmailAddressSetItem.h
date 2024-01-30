@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVCalendarServerEmailAddressSetItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *emailAddresses;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (void)addEmailAddress:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;

@end
