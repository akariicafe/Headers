@class NSSet, NSArray, NSDictionary;

@interface VSAppChannelsFilter : NSObject

@property (copy, nonatomic) NSSet *genericAppAdamIDs;
@property (copy, nonatomic) NSSet *personalAppAdamIDs;
@property (copy, nonatomic) NSSet *personalChannelIDs;
@property (copy, nonatomic) NSArray *allChannelMappings;
@property (copy, nonatomic) NSDictionary *appsByChannelID;
@property (readonly, copy, nonatomic) NSArray *personalAppDescriptions;

- (id)init;
- (void).cxx_destruct;
- (void)_updateAdamIDs;

@end
