@class NSString;

@interface MSASAssetCollectionChange : NSObject

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (nonatomic) BOOL wasDeleted;

- (id)description;
- (void).cxx_destruct;

@end
