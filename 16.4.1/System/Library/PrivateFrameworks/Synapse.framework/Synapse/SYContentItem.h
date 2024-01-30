@class NSArray, NSString, NSUUID, NSUserActivity, NSURL, NSData;

@interface SYContentItem : NSObject <NSItemProviderReading, NSItemProviderWriting, NSCopying> {
    NSData *_linkPreviewMetadata;
}

@property (class, readonly, copy, nonatomic) NSArray *readableTypeIdentifiersForItemProvider;
@property (class, readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) NSArray *writableTypeIdentifiersForItemProvider;
@property (nonatomic) long long previewLoadLevel;
@property (readonly, nonatomic) NSUUID *itemIdentifier;
@property (readonly, copy, nonatomic) NSString *displayTitle;
@property (readonly, copy, nonatomic) NSString *sourceIdentifier;
@property (readonly, copy, nonatomic) NSString *sourceLastKnownName;
@property (readonly, copy, nonatomic) NSString *webpageDisplayDomain;
@property (readonly, nonatomic) NSUserActivity *userActivity;
@property (readonly, copy, nonatomic) NSURL *itemURL;
@property (readonly, copy, nonatomic) NSString *activityType;
@property (readonly, copy, nonatomic) NSURL *activityCanonicalURL;
@property (readonly, copy, nonatomic) NSString *activityTargetContentIdentifier;
@property (readonly, copy, nonatomic) NSString *activityPersistentIdentifier;
@property (retain) NSData *linkPreviewMetadata;

+ (id)objectWithItemProviderData:(id)a0 typeIdentifier:(id)a1 error:(id *)a2;

- (id)initWithData:(id)a0 error:(id *)a1;
- (id)dataRepresentationWithError:(id *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)loadDataWithTypeIdentifier:(id)a0 forItemProviderCompletionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDisplayTitle:(id)a0 sourceIdentifier:(id)a1 sourceName:(id)a2 itemURL:(id)a3;
- (id)initWithDisplayTitle:(id)a0 sourceIdentifier:(id)a1 sourceName:(id)a2 itemURL:(id)a3 identifier:(id)a4;
- (id)initWithItemIdentifier:(id)a0 displayTitle:(id)a1 sourceIdentifier:(id)a2 sourceName:(id)a3 itemURL:(id)a4 activityType:(id)a5 activityCanonicalURL:(id)a6 activityTargetContentIdentifier:(id)a7 activityPersistentIdentifier:(id)a8 userActivity:(id)a9;
- (id)initWithUserActivity:(id)a0 sourceAppID:(id)a1;
- (id)initWithUserActivity:(id)a0 sourceAppID:(id)a1 sourceAppName:(id)a2;
- (id)initWithUserActivity:(id)a0 sourceAppID:(id)a1 sourceAppName:(id)a2 identifier:(id)a3;
- (void)loadFullPreviewIfNeeded;
- (void)loadFullPreviewIfNeededWithCompletion:(id /* block */)a0;
- (BOOL)representsSameContentAsItem:(id)a0;
- (id)searchableItemLinkingRelatedIdentifier:(id)a0 domainIdentifier:(id)a1;
- (void)setLinkPreviewMetadata:(id)a0 loadLevel:(long long)a1;

@end
