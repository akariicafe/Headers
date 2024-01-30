@class NSArray, NSString, NSData, NSDate, NSURL, NSDictionary;

@interface WBLocalTabAttributes : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=isDisplayingStandaloneImage) BOOL displayingStandaloneImage;
@property (readonly, nonatomic) double readerViewTopScrollOffset;
@property (readonly, nonatomic) int readingListBookmarkID;
@property (readonly, nonatomic, getter=wasOpenedFromLink) BOOL openedFromLink;
@property (readonly, nonatomic, getter=isShowingReader) BOOL showingReader;
@property (readonly, nonatomic) BOOL isSafeToLoadWebPage;
@property (readonly, nonatomic) NSDate *lastVisitTime;
@property (readonly, copy, nonatomic) NSData *sessionStateData;
@property (readonly, copy, nonatomic) NSArray *ancestorTabUUIDs;
@property (readonly, nonatomic) NSDate *dateClosed;
@property (readonly, nonatomic) BOOL isDisposable;
@property (readonly, nonatomic) BOOL isPinned;
@property (readonly, nonatomic) NSURL *pinnedPageURL;
@property (readonly, copy, nonatomic) NSString *pinnedPageTitle;
@property (readonly, nonatomic) BOOL isMuted;
@property (readonly, copy, nonatomic) NSDictionary *queuedNavigation;
@property (readonly, nonatomic) unsigned long long tabIndex;
@property (readonly, nonatomic) NSString *windowUUID;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;

- (id)initWithDictionaryRepresentation:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithVersion:(long long)a0 safeToLoadWebPage:(BOOL)a1 lastVisitTime:(id)a2 sessionStateData:(id)a3 ancestorTabUUIDs:(id)a4 dateClosed:(id)a5 tabIndex:(unsigned long long)a6 windowUUID:(id)a7 disposable:(BOOL)a8 pinned:(BOOL)a9 pinnedPageURL:(id)a10 pinnedPageTitle:(id)a11 muted:(BOOL)a12 queuedNavigation:(id)a13 displayingStandaloneImage:(BOOL)a14 readerViewTopScrollOffset:(double)a15 readingListBookmarkID:(int)a16 openedFromLink:(BOOL)a17 showingReader:(BOOL)a18;
- (id)initWithLastVisitTime:(id)a0 sessionStateData:(id)a1 ancestorTabUUIDs:(id)a2 displayingStandaloneImage:(BOOL)a3 readerViewTopScrollOffset:(double)a4 readingListBookmarkID:(int)a5 openedFromLink:(BOOL)a6 showingReader:(BOOL)a7 queuedNavigation:(id)a8;

@end
