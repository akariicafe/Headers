@class NSRegularExpression, NSArray, NSString;

@interface GKRoute : NSObject {
    NSRegularExpression *_regex;
    NSArray *_parameterNames;
    NSString *_scheme;
}

- (id)initWithString:(id)a0;
- (void).cxx_destruct;
- (BOOL)matchesURL:(id)a0;
- (id)initWithString:(id)a0 scheme:(id)a1;
- (BOOL)matchesURL:(id)a0 parameters:(id *)a1;
- (id)nonParameterCharacterSet;

@end
