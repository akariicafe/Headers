@class NSString;
@protocol NTFeedTransforming;

@interface NTSectionFeedFilterTransformation : NSObject <NTFeedTransforming>

@property (readonly, nonatomic) unsigned long long embedsLimit;
@property (readonly, nonatomic) id<NTFeedTransforming> underlyingTransformation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
