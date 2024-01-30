@interface NRSwitchRecordCollection : NRPBSwitchRecordCollection <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (void)truncateSwitchRecords;

@end
