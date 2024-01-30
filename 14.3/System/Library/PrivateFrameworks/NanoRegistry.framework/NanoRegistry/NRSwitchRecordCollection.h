@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)truncateSwitchRecords;
- (void)encodeWithCoder:(id)a0;

@end
