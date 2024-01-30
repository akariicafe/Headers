@class NSString, NSDictionary;

@interface HMEraseAnisetteDataResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol>

@property (class, readonly, copy, nonatomic) NSString *messageName;
@property (class, readonly, copy, nonatomic) NSString *xpcMessageName;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL didSucceed;
@property (readonly, copy, nonatomic) NSString *messageName;
@property (readonly, copy, nonatomic) NSString *xpcMessageName;
@property (readonly, nonatomic) NSDictionary *messagePayload;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)objWithDict:(id)a0;
+ (id)objWithMessage:(id)a0;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
