@class NSDictionary, NSString, NSArray;

@interface MTLCompileOptionsInternal : MTLCompileOptions {
    BOOL _userSetLanguageVersion;
    NSDictionary *_preprocessorMacros;
    BOOL _fastMathEnabled;
    BOOL _glBufferBindPoints;
    BOOL _tracingEnabled;
    BOOL _debuggingEnabled;
    unsigned long long _languageVersion;
    BOOL _compileTimeStatisticsEnabled;
    NSString *_additionalCompilerArguments;
    unsigned char _sourceLanguage;
    long long _libraryType;
    NSArray *_libraries;
    NSString *_installName;
    BOOL _preserveInvariance;
    long long _optimizationLevel;
    long long _compileSymbolVisibility;
    BOOL _allowReferencingUndefinedSymbols;
    unsigned long long _maxTotalThreadsPerThreadgroup;
}

- (long long)libraryType;
- (unsigned long long)maxTotalThreadsPerThreadgroup;
- (void)setLibraryType:(long long)a0;
- (void)setTracingEnabled:(BOOL)a0;
- (BOOL)debuggingEnabled;
- (id)installName;
- (void)setMaxTotalThreadsPerThreadgroup:(unsigned long long)a0;
- (id)formattedDescription:(unsigned long long)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (long long)optimizationLevel;
- (void)setOptimizationLevel:(long long)a0;
- (void)setFastMathEnabled:(BOOL)a0;
- (BOOL)fastMathEnabled;
- (unsigned long long)languageVersion;
- (void)setAdditionalCompilerArguments:(id)a0;
- (void)setInstallName:(id)a0;
- (id)additionalCompilerArguments;
- (BOOL)allowReferencingUndefinedSymbols;
- (long long)compileSymbolVisibility;
- (BOOL)compileTimeStatisticsEnabled;
- (id)exportDictionary;
- (BOOL)glBufferBindPoints;
- (void)importDictionary:(id)a0;
- (id)libraries;
- (id)preprocessorMacros;
- (BOOL)preserveInvariance;
- (void)setAllowReferencingUndefinedSymbols:(BOOL)a0;
- (void)setCompileSymbolVisibility:(long long)a0;
- (void)setCompileTimeStatisticsEnabled:(BOOL)a0;
- (void)setDebuggingEnabled:(BOOL)a0;
- (void)setGlBufferBindPoints:(BOOL)a0;
- (void)setLanguageVersion:(unsigned long long)a0;
- (void)setLibraries:(id)a0;
- (void)setPreprocessorMacros:(id)a0;
- (void)setPreserveInvariance:(BOOL)a0;
- (void)setSourceLanguage:(unsigned char)a0;
- (unsigned char)sourceLanguage;
- (BOOL)tracingEnabled;

@end
