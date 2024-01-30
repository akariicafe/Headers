@class NSString;

@interface HMIVideoAssetWriterDelegateAdapter : HMFObject <HMIVideoAssetWriterDelegate>

@property (copy) id /* block */ assetWriterDidOutputInitializationSegment;
@property (copy) id /* block */ assetWriterDidOutputSeparableSegment;
@property (copy) id /* block */ assetWriterDidFailWithError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
