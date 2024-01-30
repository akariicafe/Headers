@class NSString;
@protocol FCHeadlineProviding, FCNewsAppConfigurationManager;

@interface NUMediaSharingPolicyProvider : NSObject <SXMediaSharingPolicyProvider>

@property (readonly, nonatomic) id<FCHeadlineProviding> headline;
@property (readonly, nonatomic) id<FCNewsAppConfigurationManager> appConfigurationManager;
@property (readonly, nonatomic) unsigned long long mediaSharingPolicy;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithHeadline:(id)a0 appConfigurationManager:(id)a1;

@end
