@class NSDictionary;

@interface ASParseRule : NSObject {
    int _minimumNumber;
    int _maximumNumber;
    int _codePage;
    int _token;
    Class _objectClass;
    SEL _setterMethod;
    long long _dataclass;
    NSDictionary *_subclassRuleSet;
    NSDictionary *_callbackDict;
    NSDictionary *_streamCallbackDict;
}

- (long long)dataclass;
- (Class)objectClass;
- (int)token;
- (int)maximumNumber;
- (SEL)setterMethod;
- (int)minimumNumber;
- (void).cxx_destruct;
- (id)subclassRuleSet;
- (id)callbackDict;
- (int)codePage;
- (id)initWithMinimumNumber:(int)a0 maximumNumber:(int)a1 codePage:(int)a2 token:(int)a3 objectClass:(Class)a4 setterMethod:(SEL)a5 dataclass:(long long)a6 callbackDict:(id)a7 streamCallbackDict:(id)a8 subclassRuleSet:(id)a9;
- (id)streamCallbackDict;

@end
