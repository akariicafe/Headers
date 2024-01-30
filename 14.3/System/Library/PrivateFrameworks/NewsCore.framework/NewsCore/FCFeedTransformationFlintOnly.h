@class NSString;

@interface FCFeedTransformationFlintOnly : NSObject <FCFeedTransforming>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)transformFeedItems:(id)a0;

@end
