@class NSURL, NSDictionary, NSString;

@interface ANNotificationAction : NSObject <NSSecureCoding, ANCachedDictionaryRepresentationProtocol>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSDictionary *options;
@property (nonatomic) BOOL isInternalURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)actionForLaunchingApp:(id)a0 withOptions:(id)a1;
+ (id)actionForOpeningWebURL:(id)a0;
+ (id)actionForLaunchingApp:(id)a0;

- (void)perform;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithManagedObject:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
