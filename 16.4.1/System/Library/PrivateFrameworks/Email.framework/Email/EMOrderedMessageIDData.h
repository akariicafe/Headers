@class NSArray, NSDictionary;

@interface EMOrderedMessageIDData : NSObject

@property (copy, nonatomic) NSArray *objectIDs;
@property (copy, nonatomic) NSDictionary *objectIDByPersistentID;

- (void).cxx_destruct;
- (id)initWithObjectIDs:(id)a0 objectIDByPersistentID:(id)a1;

@end
