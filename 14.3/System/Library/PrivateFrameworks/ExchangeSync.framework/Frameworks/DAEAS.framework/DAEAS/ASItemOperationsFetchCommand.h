@class NSString;

@interface ASItemOperationsFetchCommand : NSObject {
    NSString *_collectionID;
    NSString *_serverID;
    NSString *_longID;
}

- (void).cxx_destruct;
- (id)longID;
- (id)serverID;
- (id)collectionID;
- (id)initWithCollectionID:(id)a0 withServerID:(id)a1 withLongID:(id)a2;

@end
