@class NSString, NSDictionary;

@interface IMDHandle : NSObject

@property (retain, nonatomic) NSString *ID;
@property (retain, nonatomic) NSString *unformattedID;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, retain, nonatomic) NSDictionary *handleInfo;
@property (retain, nonatomic) NSString *personCentricID;
@property (copy, nonatomic) NSString *CNContactID;

- (void)dealloc;
- (long long)compareIDs:(id)a0;
- (unsigned long long)hash;
- (BOOL)isBusiness;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (BOOL)isBetterDefinedThan:(id)a0;
- (id)initWithID:(id)a0 unformattedID:(id)a1 countryCode:(id)a2 personCentricID:(id)a3;
- (id)initWithID:(id)a0 unformattedID:(id)a1 countryCode:(id)a2;

@end
