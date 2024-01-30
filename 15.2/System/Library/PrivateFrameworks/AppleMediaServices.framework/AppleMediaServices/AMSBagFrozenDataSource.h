@class NSArray, NSDictionary, AMSBagKeySet, NSDate, AMSProcessInfo, NSString;

@interface AMSBagFrozenDataSource : NSObject <AMSBagDataSourceProtocol, NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AMSBagKeySet *bagKeySet;
@property (readonly, nonatomic) NSArray *cookies;
@property (readonly, nonatomic) NSDictionary *data;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (readonly, copy, nonatomic) AMSProcessInfo *processInfo;
@property (readonly, copy, nonatomic) NSString *profile;
@property (readonly, copy, nonatomic) NSString *profileVersion;
@property (retain, nonatomic) NSString *descriptionExtended;
@property (copy, nonatomic) id /* block */ dataSourceChangedHandler;
@property (copy, nonatomic) id /* block */ dataSourceDataInvalidatedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void)loadWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_initWithProfile:(id)a0 profileVersion:(id)a1 data:(id)a2 expirationDate:(id)a3 bagKeySet:(id)a4 cookies:(id)a5 processInfo:(id)a6;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)valueForURLVariable:(id)a0 account:(id)a1;
- (id)bagKeyInfoForKey:(id)a0;

@end
