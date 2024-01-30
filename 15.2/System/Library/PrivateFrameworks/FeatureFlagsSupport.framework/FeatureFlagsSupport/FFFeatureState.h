@class NSDictionary, NSString;

@interface FFFeatureState : NSObject

@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *feature;
@property (nonatomic) long long value;
@property (retain, nonatomic) NSString *disclosurerequired;

- (id)initWithDomain:(id)a0 feature:(id)a1 value:(long long)a2;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(long long)a2 disclosureRequired:(id)a3 attributes:(id)a4;

@end
