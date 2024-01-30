@class NSDictionary, NSString, FCHeadlineThumbnail;
@protocol FCChannelProviding;

@interface FCLocalArticleHeadline : FCHeadline {
    BOOL _webEmbedsEnabled;
    FCHeadlineThumbnail *_thumbnail;
}

@property (readonly, nonatomic) NSDictionary *dictionary;
@property (readonly, nonatomic) NSString *path;
@property (readonly, nonatomic) id<FCChannelProviding> channel;

- (id)topicIDs;
- (id)videoURL;
- (id)sourceName;
- (id)publishDate;
- (id)allowedStorefrontIDs;
- (BOOL)isDraft;
- (id)articleID;
- (id)thumbnail;
- (id)blockedStorefrontIDs;
- (BOOL)isDeleted;
- (struct CGSize { double x0; double x1; })thumbnailSize;
- (id)iAdCategories;
- (id)shortExcerpt;
- (id)iAdKeywords;
- (id)primaryAudience;
- (unsigned long long)contentType;
- (id)contentWithContext:(id)a0;
- (id)lastModifiedDate;
- (id)accessoryText;
- (id)identifier;
- (BOOL)webEmbedsEnabled;
- (BOOL)hasThumbnail;
- (id)contentURL;
- (BOOL)isLocalDraft;
- (id)thumbnailAssetHandle;
- (BOOL)isSponsored;
- (id)iAdSectionIDs;
- (id)sourceChannel;
- (id)title;
- (BOOL)isFeatureCandidate;
- (void).cxx_destruct;
- (double)videoDuration;
- (BOOL)useTransparentNavigationBar;
- (id)surfacedByBinID;
- (id)initWithDictionary:(id)a0 path:(id)a1 channel:(id)a2;
- (BOOL)isPremium;
- (id)localDraftPath;

@end
