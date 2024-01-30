@class HLPHelpLocale, NSArray, NSMutableDictionary, NSString, NSURL, HLPHelpSectionItem, HLPURLImageCacheController;

@interface HLPHelpBookController : HLPRemoteDataController

@property (nonatomic) long long contentFormatVersion;
@property (nonatomic) long long serverType;
@property (readonly, nonatomic, getter=isSemanticHTML) BOOL semanticHTML;
@property (nonatomic) BOOL hasSectionIcon;
@property (nonatomic) BOOL fullBookView;
@property (nonatomic) BOOL platformIndependent;
@property (copy, nonatomic) NSArray *additionalSupportedLanguages;
@property (retain, nonatomic) NSMutableDictionary *helpItemMap;
@property (retain, nonatomic) NSString *contentVersion;
@property (retain, nonatomic) NSString *copyrightText;
@property (retain, nonatomic) NSString *copyrightTopicIdentifier;
@property (retain, nonatomic) NSString *bookId;
@property (retain, nonatomic) NSString *topicPathFormat;
@property (retain, nonatomic) NSString *remoteSearchPath;
@property (retain, nonatomic) NSString *remoteCSSearchIndex;
@property (retain, nonatomic) NSString *iconBasePath;
@property (retain, nonatomic) HLPHelpLocale *locale;
@property (retain, nonatomic) NSString *welcomeTopicIdentifier;
@property (retain, nonatomic) NSURL *helpBookURL;
@property (retain, nonatomic) HLPHelpSectionItem *rootSectionItem;
@property (retain, nonatomic) HLPURLImageCacheController *imageCacheController;

- (void)dealloc;
- (void).cxx_destruct;
- (id)systemLanguages;
- (void)addAsideTopic:(id)a0;
- (id)copyrightTopicItem;
- (id)dynamicServerSectionsForIdentifiers:(id)a0 level:(long long)a1 parent:(id)a2 tocMap:(id)a3;
- (void)fetchDataWithDataType:(long long)a0 identifier:(id)a1 completionHandler:(id /* block */)a2;
- (id)helpItemForID:(id)a0;
- (id)helpTopicItemForID:(id)a0;
- (id)helpTopicItemForName:(id)a0;
- (void)processData:(id)a0 formattedData:(id)a1;
- (void)processFileURLWithCompletionHandler:(id /* block */)a0;
- (id)sectionsForChildrenIdentifiers:(id)a0 level:(long long)a1 parent:(id)a2 sectionsMap:(id)a3 topicsMap:(id)a4;
- (id)welcomeTopicItem;

@end
