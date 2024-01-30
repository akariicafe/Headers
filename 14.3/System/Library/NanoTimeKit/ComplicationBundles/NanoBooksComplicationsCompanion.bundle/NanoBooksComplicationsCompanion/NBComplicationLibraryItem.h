@class NSString, NSNumber, UIImage;

@interface NBComplicationLibraryItem : NSObject

@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *author;
@property (readonly, nonatomic) NSNumber *persistentID;
@property (readonly, nonatomic) UIImage *artwork;
@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) NSNumber *bookmarkTime;

+ (id)libraryItemWithMediaItem:(id)a0;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end
