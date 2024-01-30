@class NSDictionary;

@interface CKDRemoveAnonymousShareFromSharedDBOperationInfo : CKDatabaseOperationInfo

@property (retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove;
@property (copy, nonatomic) id /* block */ anonymousShareRemovedBlock;

- (void).cxx_destruct;

@end
