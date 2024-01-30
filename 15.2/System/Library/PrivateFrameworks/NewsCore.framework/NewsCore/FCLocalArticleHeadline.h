@class NSDictionary, NSString, FCHeadlineThumbnail;
@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline {
    BOOL _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) id<FCChannelProviding> channel;

- (BOOL)isDraft;
- (BOOL)useTransparentNavigationBar;
- (id)blockedStorefrontIDs;
- (id)topicIDs;
- (id)identifier;
- (BOOL)webEmbedsEnabled;
- (unsigned long long)contentType;
- (id)iAdSectionIDs;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (BOOL)isLocalDraft;
- (id)contentWithContext:(id)a0;
- (id)title;
- (id)articleID;
- (id)allowedStorefrontIDs;
- (id)sourceName;
- (BOOL)hasThumbnail;
- (BOOL)isFeatureCandidate;
- (id)primaryAudience;
- (BOOL)isDeleted;
- (BOOL)isSponsored;
- (id)thumbnail;
- (double)videoDuration;
- (id)accessoryText;
- (void).cxx_destruct;
- (id)iAdCategories;
- (BOOL)isPremium;
- (id)shortExcerpt;
- (id)surfacedByBinID;
- (id)videoURL;
- (id)publishDate;
- (id)localDraftPath;
- (id)lastModifiedDate;
- (id)thumbnailAssetHandle;
- (id)contentURL;
- (id)sourceChannel;
- (id)iAdKeywords;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2;

@end
