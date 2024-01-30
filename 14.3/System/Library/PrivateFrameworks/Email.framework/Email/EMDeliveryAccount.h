@class NSString;

@interface EMDeliveryAccount : EMAccount <EMDeliveryAccountBuilder> {
    NSString *_name;
}

@property (nonatomic) unsigned long long maximumMessageBytes;
@property (copy, nonatomic) NSString *username;
@property (copy, nonatomic) NSString *hostname;
@property (nonatomic, getter=isPrimaryiCloudAccount) BOOL primaryiCloudAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)_commonInitName:(id)a0 hostname:(id)a1 builder:(id /* block */)a2;
- (id)initWithObjectID:(id)a0 name:(id)a1 hostname:(id)a2 builder:(id /* block */)a3;
- (id)name;
- (void)encodeWithCoder:(id)a0;

@end
