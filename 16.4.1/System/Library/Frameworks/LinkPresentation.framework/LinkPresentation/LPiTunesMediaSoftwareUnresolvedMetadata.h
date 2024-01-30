@class NSString, NSArray, NSNumber, LPiTunesMediaAsset;

@interface LPiTunesMediaSoftwareUnresolvedMetadata : NSObject <LPiTunesMediaUnresolvedMetadata>

@property (copy, nonatomic) NSString *storeFrontIdentifier;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *genre;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSNumber *isHiddenFromSpringboard;
@property (copy, nonatomic) NSNumber *hasMessagesExtension;
@property (retain, nonatomic) LPiTunesMediaAsset *icon;
@property (retain, nonatomic) LPiTunesMediaAsset *messagesAppIcon;
@property (retain, nonatomic) NSArray *screenshots;
@property (retain, nonatomic) LPiTunesMediaAsset *previewVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)resolve;
- (id)assetsToFetch;

@end
