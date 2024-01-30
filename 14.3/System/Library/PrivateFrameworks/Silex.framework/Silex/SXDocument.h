@class NSString, SXDocumentStyle, SXJSONArray, SXJSONDictionary, SXDocumentColorScheme, SXMetadata;
@protocol SXAdvertisingSettings, SXAutoPlacement, SXDocumentLayout, SXHints;

@interface SXDocument : SXJSONObject

@property (readonly, nonatomic) SXJSONArray *allComponents;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) SXMetadata *metadata;
@property (readonly, nonatomic) NSString *specVersion;
@property (readonly, nonatomic) SXJSONArray *components;
@property (readonly, nonatomic) SXJSONDictionary *resources;
@property (readonly, nonatomic) SXJSONDictionary *componentStyles;
@property (readonly, nonatomic) SXJSONDictionary *textStyles;
@property (readonly, nonatomic) SXJSONDictionary *componentTextStyles;
@property (readonly, nonatomic) SXJSONDictionary *componentLayouts;
@property (readonly, nonatomic) id<SXDocumentLayout> layout;
@property (readonly, nonatomic) SXDocumentStyle *documentStyle;
@property (readonly, nonatomic) id<SXAdvertisingSettings> advertisingSettings;
@property (readonly, nonatomic) id<SXAutoPlacement> autoplacement;
@property (readonly, nonatomic) id<SXHints> hints;
@property (readonly, nonatomic) SXDocumentColorScheme *colorScheme;

+ (Class)classForProtocolProperty:(id)a0 withValue:(id)a1;
+ (id /* block */)valueClassBlockForPropertyWithName:(id)a0;
+ (id /* block */)objectValueClassBlockForPropertyWithName:(id)a0;
+ (id /* block */)purgeClassBlockForPropertyWithName:(id)a0;

- (void).cxx_destruct;
- (id)initWithJSONObject:(id)a0 andVersion:(id)a1;
- (id)initWithIdentifier:(id)a0 JSONObject:(id)a1 andVersion:(id)a2;

@end
