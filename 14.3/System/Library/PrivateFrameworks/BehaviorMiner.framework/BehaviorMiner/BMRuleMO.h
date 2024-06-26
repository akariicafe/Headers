@class NSSet;

@interface BMRuleMO : NSManagedObject

@property (nonatomic) long long absoluteAntecedentSupport;
@property (nonatomic) long long absoluteConsequentSupport;
@property (nonatomic) long long absoluteSupport;
@property (nonatomic) double confidence;
@property (nonatomic) double support;
@property (nonatomic) long long uniqueDaysLastWeek;
@property (nonatomic) long long uniqueDaysTotal;
@property (retain, nonatomic) NSSet *antecedent;
@property (retain, nonatomic) NSSet *consequent;

+ (id)fetchRequest;

@end
