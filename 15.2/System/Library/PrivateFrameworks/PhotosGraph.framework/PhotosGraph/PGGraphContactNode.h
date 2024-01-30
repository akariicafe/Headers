@class NSString, NSDate;

@interface PGGraphContactNode : PGGraphOptimizedNode

@property (readonly) NSString *name;
@property (readonly) NSString *contactIdentifier;
@property (readonly) NSDate *birthdayDate;
@property (readonly) NSDate *potentialBirthdayDate;

- (BOOL)hasProperties:(id)a0;
- (id)description;
- (id)propertyDictionary;
- (id)label;
- (void).cxx_destruct;
- (unsigned short)domain;
- (id)initWithLabel:(id)a0 domain:(unsigned short)a1 weight:(float)a2 properties:(id)a3;
- (void)setLocalProperties:(id)a0;
- (id)initWithName:(id)a0 contactIdentifier:(id)a1 birthdayDate:(id)a2 potentialBirthdayDate:(id)a3;
- (unsigned long long)sexHintForGivenName;

@end
