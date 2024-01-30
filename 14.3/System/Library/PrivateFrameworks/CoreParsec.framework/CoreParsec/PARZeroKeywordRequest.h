@interface PARZeroKeywordRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

- (unsigned int)nwActivityLabel;

@end
