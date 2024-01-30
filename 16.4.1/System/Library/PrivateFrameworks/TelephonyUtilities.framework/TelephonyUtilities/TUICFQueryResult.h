@interface TUICFQueryResult : NSObject

@property (nonatomic) BOOL allowCallForDestinationID;
@property (nonatomic, getter=isFromBlockList) BOOL fromBlockList;

- (id)description;

@end
