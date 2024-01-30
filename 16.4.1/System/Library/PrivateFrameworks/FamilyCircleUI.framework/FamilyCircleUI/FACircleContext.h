@class NSString, NSDictionary, NSData, NSURL, AKAppleIDAuthenticationContext;

@interface FACircleContext : NSObject <NSCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSData *dataRepresentation;
@property (copy, nonatomic) NSURL *urlForContext;
@property (copy, nonatomic) NSString *urlEndpoint;
@property (retain, nonatomic) AKAppleIDAuthenticationContext *authContext;
@property (readonly, copy, nonatomic) NSString *eventType;
@property (copy, nonatomic) NSString *clientName;
@property (copy, nonatomic) NSString *clientBundleID;
@property (copy, nonatomic) NSDictionary *additionalParameters;
@property (nonatomic) unsigned long long activityIndicatorStyle;

+ (id)contextWithData:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithEventType:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isPlatformSupported;

@end
