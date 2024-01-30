@class NSString;

@interface NTFeedTransformationLimit : NSObject <NTFeedTransforming>

@property (nonatomic) unsigned long long limit;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)transformFeedItems:(id)a0;
- (id)initWithLimit:(unsigned long long)a0;

@end
