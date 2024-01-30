@interface _WKWebExtensionWebNavigationURLPredicate : NSObject {
    long long _type;
    id _value;
}

- (void).cxx_destruct;
- (id)initWithTypeString:(id)a0 value:(id)a1 outErrorMessage:(id *)a2;
- (BOOL)matchesURL:(id)a0;

@end
