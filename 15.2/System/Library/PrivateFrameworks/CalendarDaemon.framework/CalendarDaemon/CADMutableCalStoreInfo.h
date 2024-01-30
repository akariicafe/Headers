@class NSString;

@interface CADMutableCalStoreInfo : NSObject <CADCalStoreInfo>

@property (nonatomic) int rowID;
@property (nonatomic) BOOL isLocalStore;
@property (nonatomic) BOOL isEnabled;
@property (copy, nonatomic) NSString *storeName;
@property (copy, nonatomic) NSString *accountIdentifier;
@property (copy, nonatomic) NSString *delegatedAccountOwnerAccountIdentifier;

- (void).cxx_destruct;

@end
