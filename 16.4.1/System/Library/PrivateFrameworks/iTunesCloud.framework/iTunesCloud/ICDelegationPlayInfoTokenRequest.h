@class NSNumber, NSData, NSMutableDictionary;

@interface ICDelegationPlayInfoTokenRequest : NSObject <NSCopying>

@property (copy, nonatomic) NSNumber *DSID;
@property (copy, nonatomic) NSData *cloudCredentialsTokenData;
@property (copy, nonatomic) NSData *SICData;
@property (readonly, copy, nonatomic) NSMutableDictionary *propertyListRepresentation;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)initWithDSID:(id)a0 SICData:(id)a1;

@end
