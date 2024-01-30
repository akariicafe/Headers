@class NSURL, NSString;

@interface WBSCredentialMatchCriteria : NSObject

@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, copy, nonatomic) NSString *partialUsername;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 options:(unsigned long long)a1 partialUsername:(id)a2;

@end
