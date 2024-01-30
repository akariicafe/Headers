@class NSUUID, NSString, NSDictionary;

@interface CATIDSServiceConnectionMetadata : NSObject

@property (readonly, nonatomic) NSUUID *connectionIdentifier;
@property (readonly, copy, nonatomic) NSString *destinationAppleID;
@property (readonly, copy, nonatomic) NSDictionary *userInfo;

- (BOOL)isEqualToMetadata:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithConnectionIdentifier:(id)a0 destinationAppleID:(id)a1 userInfo:(id)a2;

@end
