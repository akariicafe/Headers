@class NSString, NSSet, NSDictionary;

@interface _PSContactSuggestion : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *contactIdentifier;
@property (nonatomic) double regularityScore;
@property (nonatomic) unsigned long long totalFrequency;
@property (copy, nonatomic) NSSet *daysInteracted;
@property (copy, nonatomic) NSDictionary *handleAndAppFrequencies;
@property (copy, nonatomic) NSDictionary *handleAndAppRegularityScores;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
