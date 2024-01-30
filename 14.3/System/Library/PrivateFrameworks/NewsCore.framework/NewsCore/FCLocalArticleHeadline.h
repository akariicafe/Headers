@class NSDictionary, NSString, FCHeadlineThumbnail;
@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline {
    BOOL _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) id<FCChannelProviding> channel;

- (id)thumbnail;
- (void).cxx_destruct;
- (id)iAdKeywords;
- (id)thumbnailAssetHandle;
- (id)primaryAudience;
- (id)articleID;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2;
- (unsigned long long)contentType;
- (BOOL)webEmbedsEnabled;
- (id)surfacedByBinID;
- (BOOL)useTransparentNavigationBar;
- (BOOL)isDeleted;
- (id)shortExcerpt;
- (id)accessoryText;
- (id)sourceChannel;
- (id)topicIDs;
- (id)localDraftPath;
- (BOOL)isFeatureCandidate;
- (BOOL)isSponsored;
- (id)contentURL;
- (id)blockedStorefrontIDs;
- (id)iAdCategories;
- (id)sourceName;
- (BOOL)isDraft;
- (id)lastModifiedDate;
- (BOOL)isLocalDraft;
- (BOOL)isPremium;
- (id)allowedStorefrontIDs;
- (id)iAdSectionIDs;
- (double)videoDuration;
- (id)contentWithContext:(id)a0;
- (BOOL)hasThumbnail;
- (id)videoURL;
- (id)publishDate;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)title;
- (id)identifier;

@end
