@class NSString, NSArray;

@interface CNAccountsAndGroupsSection : NSObject

@property (copy, nonatomic) id /* block */ titleProvider;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isAllContactsGlobalSection;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
