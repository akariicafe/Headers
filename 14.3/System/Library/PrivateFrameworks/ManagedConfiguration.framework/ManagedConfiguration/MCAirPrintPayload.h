@class NSMutableArray;

@interface MCAirPrintPayload : MCPayload

@property (retain, nonatomic) NSMutableArray *ippAddresses;
@property (nonatomic) unsigned long long airPrintCount;

+ (id)typeStrings;
+ (id)localizedPluralForm;
+ (id)localizedSingularForm;

- (id)verboseDescription;
- (id)stubDictionary;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 profile:(id)a1 outError:(id *)a2;
- (id)payloadDescriptionKeyValueSections;
- (id)subtitle1Label;
- (id)subtitle1Description;
- (id)restrictions;

@end
