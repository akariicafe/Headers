@class NSString;

@interface PGTextFeature : NSObject

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *originalString;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) double weight;
@property (readonly, nonatomic) unsigned long long origin;

+ (id)stringForFeatureType:(unsigned long long)a0;
+ (id)_localizedNameForLocalizableNode:(id)a0;
+ (unsigned long long)_mostImportantTextFeatureTypeAmongTypes:(id)a0;
+ (id)_stringToIndexFromTokens:(id)a0;
+ (id)_tokensFromString:(id)a0 lemmatize:(BOOL)a1;
+ (id)graphNamesForNode:(id)a0 locationHelper:(id)a1;
+ (id)mergedTextFeatureFromTextFeatures:(id)a0;
+ (id)stringForFeatureOrigin:(unsigned long long)a0;
+ (id)textFeaturesFromNode:(id)a0 type:(unsigned long long)a1 weight:(double)a2 options:(unsigned long long)a3 locationHelper:(id)a4;
+ (id)textFeaturesFromString:(id)a0 synonyms:(id)a1 type:(unsigned long long)a2 weight:(double)a3 options:(unsigned long long)a4;
+ (id)textFeaturesFromString:(id)a0 type:(unsigned long long)a1 weight:(double)a2 options:(unsigned long long)a3;
+ (id)vipTextFeatureTypes;

- (id)description;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 originalString:(id)a1 type:(unsigned long long)a2 weight:(double)a3 origin:(unsigned long long)a4;
- (void)markAsStrippedOut;

@end
