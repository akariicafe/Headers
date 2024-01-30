@class NSString;

@interface QLUTIAnalyzer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *contentType;

+ (BOOL)isTypeAudioOnly:(id)a0;
+ (id)UTIForURL:(id)a0;
+ (id)knownExtensions;
+ (id)privateUTIFromFileName:(id)a0;
+ (id)removeSpacesFromString:(id)a0;

- (void).cxx_destruct;
- (id)initWithContentType:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0;
- (BOOL)isAudioOnly;
- (void)encodeWithCoder:(id)a0;

@end
