@class NSArray, NSString, NSLocale;

@interface EMTResult : NSObject <NSCopying>

@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) NSArray *tokens;
@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL lowConfidence;
@property (readonly, nonatomic) NSString *metaInfo;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithLocale:(id)a0 tokens:(id)a1 confidence:(float)a2 lowConfidence:(BOOL)a3 metaInfo:(id)a4;

@end
