@class NSDictionary, NSString;

@interface FFFeatureState : NSObject

@property (retain, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSString *domain;
@property (retain, nonatomic) NSString *feature;
@property (nonatomic) BOOL hidden;
@property (nonatomic) long long value;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(long long)a2 hidden:(BOOL)a3 attributes:(id)a4;
- (id)initWithDomain:(id)a0 feature:(id)a1 value:(long long)a2;

@end
