@class NSMutableDictionary;

@interface SGMatchedDetails : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_tokenDetailMap;
    NSMutableDictionary *_detailTokenMap;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)matchedDetailsWithContact:(id)a0 matchinfoData:(id)a1 tokens:(id)a2;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithContact:(id)a0 matchinfoData:(id)a1 tokens:(id)a2;
- (id)matchedDetailsForToken:(id)a0;
- (id)tokensForDetail:(id)a0;
- (void)_processRawData:(id)a0 tokens:(id)a1 contact:(id)a2;
- (BOOL)isEqualToMatchedDetails:(id)a0;
- (id)_contactDetailFromContact:(id)a0 column:(unsigned int)a1 detailEntityId:(id)a2;
- (void)encodeWithCoder:(id)a0;

@end
