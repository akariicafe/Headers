@class NSString, NSDictionary, NSArray;

@interface MTLCompileOptions : NSObject <NSCopying>

@property (nonatomic) BOOL tracingEnabled;
@property (nonatomic) BOOL glBufferBindPoints;
@property (nonatomic) BOOL debuggingEnabled;
@property (nonatomic) BOOL compileTimeStatisticsEnabled;
@property (copy, nonatomic) NSString *additionalCompilerArguments;
@property (nonatomic) unsigned char sourceLanguage;
@property (copy, nonatomic) NSDictionary *preprocessorMacros;
@property (nonatomic) BOOL fastMathEnabled;
@property (nonatomic) unsigned long long languageVersion;
@property (nonatomic) long long libraryType;
@property (copy, nonatomic) NSString *installName;
@property (copy, nonatomic) NSArray *libraries;
@property (nonatomic) BOOL preserveInvariance;
@property (nonatomic) long long optimizationLevel;
@property (nonatomic) long long compileSymbolVisibility;
@property (nonatomic) BOOL allowReferencingUndefinedSymbols;
@property (nonatomic) unsigned long long maxTotalThreadsPerThreadgroup;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
