@class NSString, NSDictionary;

@interface PARSearchReplayRequest : PARSearchRequest <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *replaySearchURL;
@property (copy, nonatomic) NSDictionary *replayHeaderItems;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
