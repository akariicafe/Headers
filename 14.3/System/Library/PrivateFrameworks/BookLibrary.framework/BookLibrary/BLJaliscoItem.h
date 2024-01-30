@class NSString, NSDictionary, NSDate, NSNumber;

@interface BLJaliscoItem : NSObject

@property (copy, nonatomic) NSString *storeID;
@property (copy, nonatomic) NSString *artist;
@property (copy, nonatomic) NSString *artworkTokenCode;
@property (copy, nonatomic) NSString *artworkURLString;
@property (copy, nonatomic) NSString *cloudID;
@property (copy, nonatomic) NSString *genre;
@property (retain, nonatomic) NSNumber *isHidden;
@property (copy, nonatomic) NSDate *purchasedAt;
@property (copy, nonatomic) NSString *purchasedTokenCode;
@property (retain, nonatomic) NSNumber *purchaseHistoryID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *isExplicit;
@property (retain, nonatomic) NSNumber *isDisabled;
@property (copy, nonatomic) NSDate *expectedDate;
@property (copy, nonatomic) NSString *sortedTitle;
@property (copy, nonatomic) NSString *sortedAuthor;
@property (retain, nonatomic) NSNumber *pageProgressionDirection;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *displayVersion;
@property (copy, nonatomic) NSString *storeDownloadParameters;
@property (copy, nonatomic) NSString *fileExtension;
@property (retain, nonatomic) NSNumber *isPictureBook;
@property (retain, nonatomic) NSNumber *containsAudio;
@property (retain, nonatomic) NSNumber *isReadAloud;
@property (retain, nonatomic) NSString *chapterMetadataURLString;
@property (retain, nonatomic) NSNumber *isAudiobook;
@property (retain, nonatomic) NSString *hlsPlaylistURLString;
@property (retain, nonatomic) NSNumber *storeAccountID;
@property (retain, nonatomic) NSDictionary *additionalAudiobookInfo;
@property (retain, nonatomic) NSNumber *needsImport;
@property (readonly, nonatomic) NSNumber *duration;

+ (id)itemWithServerItem:(id)a0;
+ (id)arrayWithServerItems:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;

@end
