@class NSURL, NSString, NSDictionary;

@interface BBMutableAttachmentMetadata : BBAttachmentMetadata

@property (nonatomic) long long type;
@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *uniformType;
@property (copy, nonatomic) NSDictionary *thumbnailGeneratorUserInfo;
@property (nonatomic) BOOL thumbnailHidden;
@property (nonatomic) BOOL hiddenFromDefaultExpandedView;

- (void)setURL:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setType:(long long)a0;
- (void)setThumbnailGeneratorUserInfo:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setUniformType:(id)a0;
- (void)setThumbnailHidden:(BOOL)a0;
- (void)setHiddenFromDefaultExpandedView:(BOOL)a0;

@end
