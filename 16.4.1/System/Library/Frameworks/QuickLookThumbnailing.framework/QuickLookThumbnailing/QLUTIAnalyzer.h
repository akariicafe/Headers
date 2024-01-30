@class NSString;

@interface QLUTIAnalyzer : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSString *contentType;

+ (id)knownExtensions;
+ (id)privateContentTypeFromFileName:(id)a0;
+ (id)UTIForURL:(id)a0;
+ (id)contentTypeForURL:(id)a0;
+ (BOOL)isContentTypeAudioOnly:(id)a0;
+ (BOOL)isTypeAudioOnly:(id)a0;
+ (id)removeSpacesFromString:(id)a0;

- (id)initWithURL:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithContentType:(id)a0;
- (BOOL)isAudioOnly;

@end
