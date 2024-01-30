@class NSDictionary;

@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary *_tokenDetailMap;
    NSDictionary *_detailTokenMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (long long)tokenMatchedDetailTypeForContact:(id)a0 contactEntityId:(id)a1 detailEntityId:(id)a2 matchedDetailReader:(id)a3 phraseNumber:(unsigned int)a4 token:(id)a5;
+ (id)matchedDetailsWithContact:(id)a0 matchinfoData:(id)a1 tokens:(id)a2;
+ (long long)tokensMatchedDetailTypeForContact:(id)a0 contactEntityId:(id)a1 detailEntityId:(id)a2 matchinfoData:(id)a3 tokens:(id)a4;
+ (long long)tokenMatchedDetailTypeForContact:(id)a0 matchedDetailReader:(id)a1 phraseNumber:(unsigned int)a2 token:(id)a3;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithContact:(id)a0 matchinfoData:(id)a1 tokens:(id)a2;
- (id)tokensForDetail:(id)a0;
- (void)_initilizeDictionariesFromTokenDetailMap:(id)a0;
- (id)matchedDetailsForToken:(id)a0;
- (void)_addToTokenDetailMap:(id)a0 token:(id)a1 detail:(id)a2;
- (void)_processRawData:(id)a0 tokens:(id)a1 contact:(id)a2 tokenDetailMap:(id)a3;
- (BOOL)isEqualToMatchedDetails:(id)a0;

@end
