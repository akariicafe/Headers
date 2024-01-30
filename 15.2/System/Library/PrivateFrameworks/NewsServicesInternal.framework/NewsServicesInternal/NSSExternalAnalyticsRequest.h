@class NSURL, NSSExternalAnalyticsRequestMetadata;

@interface NSSExternalAnalyticsRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSSExternalAnalyticsRequestMetadata *metadata;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 metadata:(id)a1;

@end
