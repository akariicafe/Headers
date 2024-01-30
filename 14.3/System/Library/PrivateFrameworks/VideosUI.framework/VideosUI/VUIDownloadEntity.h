@class NSNumber, NSArray, NSString, NSMutableArray, NSObject;
@protocol VUIDownloadEntityDelegate, VUIMediaEntityIdentifier;

@interface VUIDownloadEntity : NSObject <VUIMediaEntityAssetControllerDelegate, NSCopying>

@property (retain, nonatomic) NSMutableArray *assetControllers;
@property (weak, nonatomic) id<VUIDownloadEntityDelegate> delegate;
@property (nonatomic) long long downloadType;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *identifier;
@property (retain, nonatomic) NSObject<VUIMediaEntityIdentifier> *showIdentifier;
@property (retain, nonatomic) NSArray *mediaEntities;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *releaseYear;
@property (retain, nonatomic) NSNumber *duration;
@property (retain, nonatomic) NSNumber *episodeNumber;
@property (retain, nonatomic) NSNumber *numberOfMediaItems;
@property (retain, nonatomic) NSNumber *numberOfMediaItemsDownloading;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithMediaEntity:(id)a0 withDownloadType:(long long)a1;
- (void)mediaEntityAssetController:(id)a0 stateDidChange:(id)a1;
- (id)initWithMediaEntities:(id)a0 withDownloadType:(long long)a1;
- (void)_configureWithMediaEntities:(id)a0;

@end
