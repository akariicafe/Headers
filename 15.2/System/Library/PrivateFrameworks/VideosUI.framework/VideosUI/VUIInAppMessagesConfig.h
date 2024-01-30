@class NSArray;

@interface VUIInAppMessagesConfig : NSObject

@property (nonatomic) double minimumPresentationIntervalNormal;
@property (nonatomic) double minimumPresentationIntervalRestricted;
@property (nonatomic) double pageEventDelay;
@property (retain, nonatomic) NSArray *whitelistedFields;

- (void).cxx_destruct;
- (id)init;

@end
