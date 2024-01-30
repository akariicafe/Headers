@class NSString;
@protocol FCFeedTransforming;

@interface FCFeedTransformationUnconsumedOnly : NSObject <FCFeedTransforming>

@property (retain, nonatomic) id<FCFeedTransforming> innerFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
