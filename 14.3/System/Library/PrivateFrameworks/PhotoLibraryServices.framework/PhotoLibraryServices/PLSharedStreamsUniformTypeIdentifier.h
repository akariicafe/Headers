@class NSString;

@interface PLSharedStreamsUniformTypeIdentifier : NSObject <PLUniformTypeIdentifierIdentity>

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) BOOL conformsToRawImage;
@property (nonatomic) BOOL conformsToImage;
@property (nonatomic) BOOL conformsToMovie;
@property (readonly, nonatomic, getter=isPrimaryImageFormat) BOOL primaryImageFormat;
@property (readonly, nonatomic) BOOL isPlayableVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
