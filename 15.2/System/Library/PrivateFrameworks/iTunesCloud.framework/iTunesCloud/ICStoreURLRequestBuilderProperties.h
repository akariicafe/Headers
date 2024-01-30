@class ICURLBag, NSString, ICDelegateToken, NSNumber;

@interface ICStoreURLRequestBuilderProperties : NSObject

@property (copy, nonatomic) NSString *iCloudPersonID;
@property (retain, nonatomic) ICURLBag *URLBag;
@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSString *storefrontIdentifier;
@property (copy, nonatomic) NSNumber *delegatedDSID;
@property (copy, nonatomic) NSString *delegatedStorefrontIdentifier;
@property (copy, nonatomic) ICDelegateToken *delegateToken;
@property (retain, nonatomic) ICURLBag *delegatedURLBag;

- (void).cxx_destruct;

@end
