@class NSString, NSMutableArray;

@interface OADTextListStyle : NSObject {
    NSMutableArray *mParagraphProperties;
}

@property (retain, nonatomic) NSString *language;

+ (id)defaultObject;

- (id)defaultProperties;
- (id)init;
- (id)description;
- (id)initWithDefaults;
- (void).cxx_destruct;
- (void)flatten;
- (void)changeParentTextListStylePreservingEffectiveValues:(id)a0;
- (void)enumerateParagraphPropertiesUsingBlock:(id /* block */)a0;
- (void)overrideWithTextStyle:(id)a0;
- (id)propertiesForListLevel:(unsigned long long)a0;
- (void)removeUnnecessaryOverrides;
- (void)setParentTextListStyle:(id)a0;
- (void)setPropertiesForListLevel:(unsigned long long)a0 properties:(id)a1;

@end
