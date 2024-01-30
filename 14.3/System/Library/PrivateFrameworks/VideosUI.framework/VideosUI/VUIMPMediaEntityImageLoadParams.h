@class NSString, MPMediaItem, MPArtworkCatalog;

@interface VUIMPMediaEntityImageLoadParams : NSObject <VUIImageLoadParams>

@property (nonatomic) BOOL calculatedIdentifier;
@property (retain, nonatomic) MPMediaItem *mediaItem;
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog;
@property (readonly, nonatomic) unsigned long long imageType;
@property (readonly, copy, nonatomic) NSString *imageIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMediaItem:(id)a0 andImageType:(unsigned long long)a1;

@end
