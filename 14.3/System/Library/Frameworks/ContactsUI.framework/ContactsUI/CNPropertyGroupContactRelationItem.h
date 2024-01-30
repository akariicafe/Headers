@class CNContactRelation;

@interface CNPropertyGroupContactRelationItem : CNPropertyGroupItem

@property (readonly, nonatomic) CNContactRelation *contactRelation;

+ (id)emptyValueForLabel:(id)a0;

- (id)displayStringForValue:(id)a0;
- (id)valueForDisplayString:(id)a0;
- (id)normalizedValue;

@end
