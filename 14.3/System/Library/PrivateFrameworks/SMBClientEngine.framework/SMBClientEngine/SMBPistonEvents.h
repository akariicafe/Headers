@interface SMBPistonEvents : NSObject

@property struct smb_lease_break { unsigned short newEpoch; unsigned int flags; unsigned long long leaseKeyHigh; unsigned long long leaseKeyLow; unsigned int currLeaseState; unsigned int newLeaseState; } leaseBreak;

@end
