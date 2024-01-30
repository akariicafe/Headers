@interface WBSWebExtensionWebNavigationURLPredicate : NSObject {
    long long _type;
    id _value;
}

- (BOOL)matchesURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithTypeString:(id)a0 value:(id)a1 outErrorMessage:(id *)a2;

@end
