@class NSString, NSArray;

@interface TSKApplicationICloudPreferences : NSObject

@property (nonatomic) unsigned long long iWorkAuthorColorIndex;
@property (copy, nonatomic) NSString *iWorkAuthorName;
@property (readonly, nonatomic) NSString *iWorkAuthorPrivateID;
@property (readonly, nonatomic) NSArray *iWorkAuthorPrivateIDsAndMetadata;
@property (readonly, nonatomic) NSArray *iWorkAuthorPrivateIDs;

- (id)init;
- (void).cxx_destruct;

@end
