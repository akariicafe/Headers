@class NSString, NSURL;

@interface SSLocalWebResultBuilder : SSResultBuilder

@property (retain, nonatomic) NSString *siteName;
@property (retain, nonatomic) NSString *formattedUrlString;
@property (retain, nonatomic) NSURL *url;

+ (BOOL)supportsResult:(id)a0;
+ (id)stringWithUrlString:(id)a0;

- (id)initWithResult:(id)a0;
- (void).cxx_destruct;
- (id)buildCommand;
- (id)buildDescriptions;
- (id)buildResult;

@end
