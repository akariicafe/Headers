@class NSString;

@interface EMInternalMessageID : NSObject

@property (readonly, nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSString *externalID;

- (void).cxx_destruct;
- (id)initWithDatabaseID:(long long)a0 externalID:(id)a1;

@end
