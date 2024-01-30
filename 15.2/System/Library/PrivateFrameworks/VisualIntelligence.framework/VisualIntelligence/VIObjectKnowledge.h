@class NSString, NSURL, NSArray;

@interface VIObjectKnowledge : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *knowledgeGraphID;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSURL *thumbnailURL;
@property (readonly, nonatomic) float thumbnailAspectRatio;
@property (readonly, copy, nonatomic) NSString *shortDescription;
@property (readonly, copy, nonatomic) NSString *detailedDescription;
@property (readonly, copy, nonatomic) NSURL *webURL;
@property (readonly, copy, nonatomic) NSArray *knowledgeProperties;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithKnowledgeGraphID:(id)a0 title:(id)a1 thumbnailURL:(id)a2 thumbnailAspectRatio:(float)a3 shortDescription:(id)a4 detailedDescription:(id)a5 webURL:(id)a6 knowledgeProperties:(id)a7;

@end
