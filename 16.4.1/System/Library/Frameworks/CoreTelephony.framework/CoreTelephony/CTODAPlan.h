@class NSString;

@interface CTODAPlan : CTPlan

@property (readonly, nonatomic) NSString *mcc;
@property (readonly, nonatomic) NSString *mnc;
@property (readonly, nonatomic) NSString *gid1;
@property (readonly, nonatomic) NSString *gid2;
@property (readonly, nonatomic) NSString *setupURL;
@property (readonly, nonatomic) NSString *handoffToken;
@property (readonly, nonatomic) BOOL inBuddy;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithSetupUrl:(id)a0 mcc:(id)a1 mnc:(id)a2 gid1:(id)a3 gid2:(id)a4 handoffToken:(id)a5 inBuddy:(BOOL)a6;

@end
