@class NSString;

@interface MSASAssetCollectionChange : NSObject

@property (retain, nonatomic) NSString *GUID;
@property (retain, nonatomic) NSString *ctag;
@property (nonatomic) BOOL wasDeleted;

- (void).cxx_destruct;
- (id)description;

@end
