@class NSString, NSDictionary, NSURL, NSUUID, NSArray;

@interface WBSCloudTab : NSObject <NSCopying, WBSTabItemSearchSupport>

@property (nonatomic) BOOL isShowingReader;
@property (copy, nonatomic) NSDictionary *readerScrollPositionDictionary;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSUUID *uuid;
@property (nonatomic, getter=isPinned) BOOL pinned;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentationForUserActivityUserInfo;
@property (readonly, copy, nonatomic) NSString *sceneID;
@property (copy, nonatomic) NSString *titleForLastSearch;
@property (copy, nonatomic) NSArray *titleWords;
@property (readonly, nonatomic) NSString *URLString;
@property (copy, nonatomic) NSString *URLStringForLastSearch;
@property (copy, nonatomic) NSArray *URLStringComponents;
@property (copy, nonatomic) NSString *lastSearchTerm;
@property (nonatomic) BOOL matchedLastSearch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dictionaryWithURL:(id)a0 uuid:(id)a1 title:(id)a2 isShowingReader:(BOOL)a3 readerScrollPosition:(id)a4 isPinned:(BOOL)a5 sceneID:(id)a6;

- (BOOL)hasSameUUIDAndURLAsTab:(id)a0;
- (id)initWithDictionaryFromUserActivityUserInfo:(id)a0;
- (id)initWithURL:(id)a0 uuid:(id)a1 title:(id)a2 isShowingReader:(BOOL)a3 readerScrollPosition:(id)a4 isPinned:(BOOL)a5;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithURL:(id)a0 uuid:(id)a1 title:(id)a2 isShowingReader:(BOOL)a3 readerScrollPosition:(id)a4 sceneID:(id)a5;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithDictionary:(id)a0;

@end
