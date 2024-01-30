@class CoreDAVItemWithNoChildren, NSSet;

@interface CoreDAVResourceTypeItem : CoreDAVItem

@property (retain, nonatomic) CoreDAVItemWithNoChildren *addressBook;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *searchAddressBook;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *shared;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *principal;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *collection;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;
@property (readonly, nonatomic) NSSet *stringSet;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (void)write:(id)a0;
- (id)description;
- (BOOL)isTypeWithNameSpace:(id)a0 andName:(id)a1;

@end
