@class NSString;

@interface PLInMemoryOnlyUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>

@property (copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL conformsToRawImage;
@property (readonly, nonatomic) BOOL conformsToImage;
@property (readonly, nonatomic) BOOL conformsToMovie;
@property (readonly, nonatomic, getter=isPrimaryImageFormat) BOOL primaryImageFormat;
@property (readonly, nonatomic) BOOL isPlayableVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)conformsToJPEG;
- (id)initWithIdentifier:(id)a0;
- (BOOL)conformsToAudio;
- (BOOL)isEqual:(id)a0;

@end
