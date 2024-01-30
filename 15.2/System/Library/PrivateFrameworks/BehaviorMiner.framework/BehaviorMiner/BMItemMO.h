@class NSString, NSSet;

@interface BMItemMO : NSManagedObject

@property (nonatomic) long long absoluteSupport;
@property (copy, nonatomic) NSString *normalizedValue;
@property (copy, nonatomic) NSString *typeIdentifier;
@property (copy, nonatomic) NSString *uniformIdentifier;
@property (retain, nonatomic) NSSet *antecedentOfRules;
@property (retain, nonatomic) NSSet *consequentOfRules;

+ (id)fetchRequest;

@end
