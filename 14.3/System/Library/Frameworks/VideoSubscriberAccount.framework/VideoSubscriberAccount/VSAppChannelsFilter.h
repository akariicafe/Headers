@class NSSet, NSArray;

@interface VSAppChannelsFilter : NSObject

@property (copy, nonatomic) NSSet *genericAppAdamIDs;
@property (copy, nonatomic) NSSet *personalAppAdamIDs;
@property (copy, nonatomic) NSSet *personalChannelIDs;
@property (copy, nonatomic) NSArray *allChannelMappings;

- (id)init;
- (void).cxx_destruct;
- (void)_updateAdamIDs;

@end
