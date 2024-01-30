@class NSString;

@interface PGTextFeature : NSObject

@property (readonly, nonatomic) NSString *string;
@property (readonly, nonatomic) NSString *originalString;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) float weight;
@property (readonly, nonatomic) unsigned long long origin;

+ (id)stringForFeatureType:(unsigned long long)a0;
+ (id)stringForFeatureOrigin:(unsigned long long)a0;
+ (id)textFeaturesFromNode:(id)a0 type:(unsigned long long)a1 weight:(float)a2 options:(unsigned long long)a3;
+ (id)_stringToIndexFromTokens:(id)a0;
+ (id)textFeaturesFromString:(id)a0 type:(unsigned long long)a1 weight:(float)a2 options:(unsigned long long)a3;
+ (id)_tokensFromString:(id)a0 lemmatize:(BOOL)a1;
+ (id)textFeaturesFromString:(id)a0 synonyms:(id)a1 type:(unsigned long long)a2 weight:(float)a3 options:(unsigned long long)a4;
+ (id)_localizedNameForLocalizableNode:(id)a0;
+ (id)graphNamesForNode:(id)a0;
+ (id)mergedTextFeatureFromTextFeatures:(id)a0;
+ (id)vipTextFeatureTypes;
+ (unsigned long long)_mostImportantTextFeatureTypeAmongTypes:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithString:(id)a0 originalString:(id)a1 type:(unsigned long long)a2 weight:(float)a3 origin:(unsigned long long)a4;
- (void)markAsStrippedOut;

@end
