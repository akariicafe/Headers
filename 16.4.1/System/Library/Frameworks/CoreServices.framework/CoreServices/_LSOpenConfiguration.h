@class NSDictionary, NSURL, UISClickAttribution, UISPasteSharingToken, BSServiceConnectionEndpoint;

@interface _LSOpenConfiguration : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSDictionary *frontBoardOptions;
@property (nonatomic) BOOL ignoreOpenStrategy;
@property (nonatomic) BOOL ignoreAppLinkEnabledProperty;
@property (copy, nonatomic) NSURL *referrerURL;
@property (nonatomic, getter=isSensitive) BOOL sensitive;
@property (nonatomic) BOOL allowURLOverrides;
@property (retain, nonatomic) BSServiceConnectionEndpoint *targetConnectionEndpoint;
@property (retain, nonatomic) UISClickAttribution *clickAttribution;
@property (retain, nonatomic) UISPasteSharingToken *pasteSharingToken;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;

@end
