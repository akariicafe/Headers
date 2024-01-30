@class NSArray, NSSet;

@interface WBSWebExtensionWebRequestFilter : NSObject {
    double _tabID;
    double _windowID;
    NSArray *_urlPatterns;
    NSSet *_types;
}

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0 outErrorMessage:(id *)a1;
- (id)_initializeWithDictionary:(id)a0;
- (BOOL)matchesRequestForResourceOfType:(long long)a0 URL:(id)a1 tabID:(double)a2 windowID:(double)a3;

@end
