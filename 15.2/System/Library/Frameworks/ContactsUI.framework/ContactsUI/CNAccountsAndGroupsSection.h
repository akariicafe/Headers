@class NSString, NSArray;

@interface CNAccountsAndGroupsSection : NSObject

@property (copy, nonatomic) id /* block */ titleProvider;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSString *identifier;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;

@end
