@class NSString, NSDictionary, NSArray;

@interface MTLCompileOptions : NSObject <NSCopying>

@property (nonatomic) BOOL tracingEnabled;
@property (nonatomic) BOOL glBufferBindPoints;
@property (nonatomic) BOOL debuggingEnabled;
@property (nonatomic) BOOL compileTimeStatisticsEnabled;
@property (nonatomic) NSString *additionalCompilerArguments;
@property (nonatomic) unsigned char sourceLanguage;
@property (copy, nonatomic) NSDictionary *preprocessorMacros;
@property (nonatomic) BOOL fastMathEnabled;
@property (nonatomic) unsigned long long languageVersion;
@property (nonatomic) long long libraryType;
@property (copy, nonatomic) NSString *installName;
@property (copy, nonatomic) NSArray *libraries;
@property (nonatomic) BOOL preserveInvariance;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)alloc;

- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
