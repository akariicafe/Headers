@class NSSet, SXTextTangierStorage, NSString;
@protocol TSDRepDirectLayerHosting;

@interface SXTextTangierContainerInfo : TSDContainerInfo <SXTangierRepDirectLayerHostingInfo>

@property (readonly, nonatomic) SXTextTangierStorage *storage;
@property (retain, nonatomic) NSSet *fixedExclusionPaths;
@property (retain, nonatomic) NSSet *rangedExclusionPaths;
@property (nonatomic) BOOL isSelectable;
@property (nonatomic) BOOL shouldHyphenate;
@property (weak, nonatomic) id<TSDRepDirectLayerHosting> directLayerHost;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
