@class NSString, NSDictionary;

@interface HDClinicalProviderServiceModel : NSObject <NSCopying>

@property (class, readonly, copy, nonatomic) NSString *schemaName;

@property (readonly, copy, nonatomic) NSDictionary *content;
@property (readonly, nonatomic) long long revision;

+ (void)initialize;
+ (BOOL)validateContent:(id)a0 error:(out id *)a1;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithContent:(id)a0;
- (id)_initWithoutValidatingContent:(id)a0;
- (id)initWithoutValidatingContent:(id)a0;
- (id)createRawContentWithError:(out id *)a0;

@end
