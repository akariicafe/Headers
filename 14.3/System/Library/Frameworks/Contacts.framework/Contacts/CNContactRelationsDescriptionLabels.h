@class NSArray, NSDictionary;

@interface CNContactRelationsDescriptionLabels : NSObject

@property (readonly, nonatomic) NSArray *preferredLanguages;
@property (readonly, nonatomic) NSArray *standardLabels;
@property (readonly, nonatomic) NSArray *standardLocaleSpecificLabels;
@property (readonly, nonatomic) NSArray *extendedLabels;
@property (readonly, nonatomic) NSArray *extendedLocaleSpecificLabels;
@property (readonly, nonatomic) NSDictionary *localizedStringsByLabelKey;

- (id)initWithPreferredLanguages:(id)a0 standardLabels:(id)a1 standardLocaleSpecificLabels:(id)a2 extendedLabels:(id)a3 extendedLocaleSpecificLabels:(id)a4 localizedStringsByLabelKey:(id)a5;
- (void).cxx_destruct;

@end
