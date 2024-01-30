@class NSRegularExpression, NSArray, NSString;

@interface GKRoute : NSObject {
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}

- (id)initWithString:(id)a0;
- (BOOL)matchesURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithString:(id)a0 scheme:(id)a1;
- (id)nonParameterCharacterSet;
- (BOOL)matchesURL:(id)a0 parameters:(id *)a1;

@end
