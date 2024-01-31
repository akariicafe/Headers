@class NSString, ACDManagedAccount;

@interface ACDManagedAccountProperty : NSManagedObject

@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) ACDManagedAccount *owner;

@end
