@class NSRegularExpression, NSArray, NSString;

@interface GKRoute : NSObject {
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}

- (BOOL)matchesURL:(id)a0;
- (void)dealloc;
- (id)initWithString:(id)a0;
- (id)initWithString:(id)a0 scheme:(id)a1;
- (id)nonParameterCharacterSet;
- (BOOL)matchesURL:(id)a0 parameters:(id *)a1;

@end
