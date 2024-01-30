@class NSDictionary, NSURL, BSServiceConnectionEndpoint;

@interface _LSOpenConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *frontBoardOptions;
@property (nonatomic) BOOL ignoreOpenStrategy;
@property (nonatomic) BOOL ignoreAppLinkEnabledProperty;
@property (copy, nonatomic) NSURL *referrerURL;
@property (nonatomic, getter=isSensitive) BOOL sensitive;
@property (nonatomic) BOOL allowURLOverrides;
@property (retain, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
