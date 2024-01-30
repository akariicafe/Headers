@class NSArray, NSString, NSLocale;

@interface EMTResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL lowConfidence;
@property (readonly, nonatomic) NSString *metaInfo;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithLocale:(id)a0 tokens:(id)a1 confidence:(float)a2 lowConfidence:(BOOL)a3 metaInfo:(id)a4;

@end
