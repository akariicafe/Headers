@class NSString, NSNumber;

@interface ATMutableAccountInfo : ATAccountInfo

@property (copy, nonatomic) NSString *appleID;
@property (copy, nonatomic) NSString *altDSID;
@property (copy, nonatomic) NSNumber *DSID;

- (void)setDSID:(id)a0;
- (void)setAppleID:(id)a0;
- (void)setAltDSID:(id)a0;

@end
