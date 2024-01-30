@class NSString, NSArray, NSDictionary;

@interface MFMailAccountProxy : NSObject {
    NSDictionary *_properties;
}

@property (readonly, nonatomic) NSString *fullUserName;
@property (readonly, nonatomic) NSString *username;
@property (readonly, nonatomic) NSString *firstEmailAddress;
@property (readonly, nonatomic) NSArray *emailAddresses;
@property (readonly, nonatomic) NSArray *fromEmailAddresses;
@property (readonly, nonatomic) NSArray *fromEmailAddressesIncludingDisabled;
@property (readonly, nonatomic) NSString *uniqueID;
@property (readonly, nonatomic) BOOL isDefaultDeliveryAccount;
@property (readonly, nonatomic) BOOL supportsThreadOperations;
@property (readonly, nonatomic) BOOL restrictsRepliesAndForwards;
@property (readonly, nonatomic) BOOL supportsMailDrop;
@property (readonly, nonatomic) BOOL isManaged;
@property (readonly, nonatomic) id mailAccount;

+ (id)log;

- (BOOL)_isActive;
- (BOOL)_isRestricted;
- (void).cxx_destruct;
- (id)_initWithProperties:(id)a0;
- (id)_emailAddressesAndAliases;

@end
