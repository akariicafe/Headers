@class NSString, AXDialectMap;

@interface AXDialectMapWrapper : NSObject

@property (retain, nonatomic) AXDialectMap *dialectMap;
@property (retain, nonatomic) NSString *languageNameInCurrentLocale;
@property (retain, nonatomic) NSString *languageNameAndLocaleInCurrentLocale;

- (void).cxx_destruct;
- (id)initWithDialectMap:(id)a0;

@end
