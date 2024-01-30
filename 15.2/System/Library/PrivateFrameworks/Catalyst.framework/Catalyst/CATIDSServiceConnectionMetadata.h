@class NSUUID, NSString, NSDictionary;

@interface CATIDSServiceConnectionMetadata : NSObject

@property (readonly, nonatomic) NSUUID *connectionIdentifier;
@property (readonly, copy, nonatomic) NSString *destinationAppleID;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqualToMetadata:(id)a0;
- (id)initWithConnectionIdentifier:(id)a0 destinationAppleID:(id)a1 userInfo:(id)a2;

@end
