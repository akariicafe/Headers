@class NSString;

@interface PHImageRequestUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL conformsToRawImage;
@property (nonatomic) BOOL conformsToImage;
@property (nonatomic) BOOL conformsToMovie;
@property (nonatomic) BOOL isPlayableVideo;
@property (readonly, nonatomic, getter=isPrimaryImageFormat) BOOL primaryImageFormat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
