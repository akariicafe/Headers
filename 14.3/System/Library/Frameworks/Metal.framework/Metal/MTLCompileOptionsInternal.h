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
}

- (id)formattedDescription:(unsigned long long)a0;
- (id)preprocessorMacros;
- (BOOL)fastMathEnabled;
- (unsigned long long)languageVersion;
- (BOOL)tracingEnabled;
- (BOOL)glBufferBindPoints;
- (BOOL)compileTimeStatisticsEnabled;
- (id)additionalCompilerArguments;
- (unsigned char)sourceLanguage;
- (long long)libraryType;
- (id)libraries;
- (BOOL)preserveInvariance;
- (void)setPreprocessorMacros:(id)a0;
- (void)setTracingEnabled:(BOOL)a0;
- (void)setGlBufferBindPoints:(BOOL)a0;
- (void)setDebuggingEnabled:(BOOL)a0;
- (void)setCompileTimeStatisticsEnabled:(BOOL)a0;
- (void)setSourceLanguage:(unsigned char)a0;
- (void)setLibraryType:(long long)a0;
- (void)setLibraries:(id)a0;
- (void)setInstallName:(id)a0;
- (void)setPreserveInvariance:(BOOL)a0;
- (id)init;
- (id)exportDictionary;
- (void)importDictionary:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setAdditionalCompilerArguments:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (void)setFastMathEnabled:(BOOL)a0;
- (void)setLanguageVersion:(unsigned long long)a0;
- (id)installName;
- (BOOL)debuggingEnabled;

@end
