@class NSString;

@interface _MPStaticArtworkVisualIdenticalityIdentifier : NSObject <MPArtworkDataSourceVisualIdenticality>

@property (copy, nonatomic) NSString *imageArtworkIdentifier;
@property (copy, nonatomic) NSString *videoArtworkIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
