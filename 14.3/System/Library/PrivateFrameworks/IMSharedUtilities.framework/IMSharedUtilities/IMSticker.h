@class NSString, NSDictionary, NSData, NSURL;

@interface IMSticker : NSObject

@property (retain, nonatomic) NSData *recipe;
@property (copy, nonatomic) NSString *ballonBundleID;
@property (copy, nonatomic) NSDictionary *attributionInfo;
@property (readonly, copy, nonatomic) NSURL *fileURL;
@property (readonly, copy, nonatomic) NSString *stickerGUID;
@property (readonly, copy, nonatomic) NSString *stickerPackGUID;
@property (copy, nonatomic) NSString *accessibilityLabel;
@property (copy, nonatomic) NSString *moodCategory;
@property (copy, nonatomic) NSString *stickerName;

- (id)init;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithStickerPropertyDictionary:(id)a0 stickerPackID:(id)a1 stickerPackBundlePath:(id)a2;
- (id)initWithStickerID:(id)a0 stickerPackID:(id)a1 fileURL:(id)a2 accessibilityLabel:(id)a3 moodCategory:(id)a4 stickerName:(id)a5;

@end
