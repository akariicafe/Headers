@class NSString, NSNumber;

@interface WLKAppProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL isEntitled;
@property (readonly, nonatomic) BOOL isBetaApp;
@property (readonly, nonatomic) BOOL isAppStoreVendable;
@property (readonly, nonatomic) BOOL isSystemApp;
@property (readonly, nonatomic) BOOL isTVApp;
@property (readonly, nonatomic) BOOL supportsTVApp;
@property (readonly, copy, nonatomic) NSString *subscriptionInfo;
@property (readonly, copy, nonatomic) NSNumber *itemID;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
