@class NSString;

@interface QLUTIAnalyzer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *contentType;

+ (BOOL)isTypeAudioOnly:(id)a0;
+ (id)UTIForURL:(id)a0;
+ (id)knownExtensions;
+ (id)privateUTIFromFileName:(id)a0;
+ (id)removeSpacesFromString:(id)a0;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithContentType:(id)a0;
- (BOOL)isAudioOnly;

@end
