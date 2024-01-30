@class NSURL;

@interface PARMoreResultsRequest : PARRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *moreResultsURL;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (unsigned int)nwActivityLabel;
- (void)encodeWithCoder:(id)a0;

@end
