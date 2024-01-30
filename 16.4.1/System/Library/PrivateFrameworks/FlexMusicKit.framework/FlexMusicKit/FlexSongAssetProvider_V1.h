@class NSString;

@interface FlexSongAssetProvider_V1 : NSObject <FlexSongAssetProviderProtocol>

@property (retain, nonatomic) NSString *rootFolderPath;
@property (retain, nonatomic) NSString *audioFileExtension;

- (void).cxx_destruct;
- (id)initWithFolderPath:(id)a0;
- (id)urlToAudioContainerForSegmentType:(unsigned long long)a0;
- (id)urlToAudioForSegment:(id)a0;
- (id)urlToRoot;

@end
