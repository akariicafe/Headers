@class NSString, NSDictionary;

@interface FCTagMetadata : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *nameImage;
@property (retain, nonatomic) NSString *nameImageForDarkBackground;
@property (retain, nonatomic) NSString *nameImageMetadata;
@property (retain, nonatomic) NSString *nameImageMask;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSDictionary *dictionary;
@property (nonatomic) BOOL isArticleMetadata;
@property (readonly, nonatomic) NSString *coverImage;
@property (readonly, nonatomic) NSString *feedNavImage;
@property (readonly, nonatomic) NSString *feedNavImageHQ;
@property (readonly, nonatomic) NSString *publisherPaidAuthorizationURL;
@property (readonly, nonatomic) NSString *publisherPaidVerificationURL;
@property (readonly, nonatomic) long long nameImageScaleFactor;
@property (readonly, nonatomic) long long nameImageBaselineShift;

- (void).cxx_destruct;
- (id)init;
- (id)initWithIdentifier:(id)a0 dictionary:(id)a1 isArticleMetadata:(BOOL)a2;

@end
