@class NSString, NSDictionary;

@interface XRXMLElementParser : NSObject {
    id context;
    XRXMLElementParser *parent;
    long long _lineOfStart;
    long long _colOfStart;
    long long _lineOfEnd;
    long long _colOfEnd;
    NSDictionary *_elementToClass;
    NSDictionary *_elementToKVC;
}

@property (readonly, nonatomic) NSString *elementName;
@property (readonly, nonatomic) NSDictionary *elementAttributes;

+ (id)_elementNameToClassMap;
+ (id)_elementNameToKVCMap;

- (void).cxx_destruct;
- (void)_handleCharacters:(id)a0;
- (void)_handleCompletion;
- (void)_handleStart;
- (id)endElementAtLine:(long long)a0 col:(long long)a1;
- (id)initWithElementName:(id)a0 context:(id)a1;
- (id)lineAndColumnForElementEnd;
- (id)lineAndColumnForElementStart;
- (void)processCharacters:(id)a0;
- (void)setValue:(id)a0 forElementName:(id)a1;
- (void)simulateEmptyElement:(id)a0;
- (id)startElementWithName:(id)a0 attributes:(id)a1 line:(long long)a2 col:(long long)a3;
- (id)valueForElementName:(id)a0;

@end
