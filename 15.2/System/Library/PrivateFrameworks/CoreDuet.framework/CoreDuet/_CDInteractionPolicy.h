@class _CDRateLimiter;

@interface _CDInteractionPolicy : NSObject

@property (retain) _CDRateLimiter *rateLimiter;
@property unsigned long long lifespanInSeconds;
@property unsigned long long maxNumberStored;
@property unsigned long long timeResolutionInSeconds;
@property unsigned long long maxNumberOfRecipients;
@property unsigned long long maxNumberOfKeywords;
@property unsigned long long maxNumberOfAttachments;

+ (id)specialPolicyForFirstPartyApps;
+ (unsigned long long)defaultMaxNumberStored;
+ (unsigned long long)defaultLifespan;
+ (id)policyFromDictionary:(id)a0;
+ (id)defaultPolicy;
+ (id)defaultPolicyForEmail;
+ (unsigned long long)defaultTimeResolutionInSeconds;
+ (id)defaultPolicyForMeetings;
+ (id)defaultPolicyForMessages;
+ (unsigned long long)defaultMaxNumberOfKeywords;
+ (unsigned long long)defaultMaxNumberOfRecipients;
+ (id)defaultPolicyForCalls;
+ (unsigned long long)defaultMaxNumberOfAttachments;
+ (id)policyWithRateLimiter:(id)a0 lifespanInSeconds:(unsigned long long)a1 maxNumberStored:(unsigned long long)a2 timeResolutionInSeconds:(unsigned long long)a3 maxNumberOfRecipients:(unsigned long long)a4 maxNumberOfKeywords:(unsigned long long)a5 maxNumberOfAttachments:(unsigned long long)a6;

- (id)initWithRateLimiter:(id)a0 lifespanInSeconds:(unsigned long long)a1 maxNumberStored:(unsigned long long)a2 timeResolutionInSeconds:(unsigned long long)a3 maxNumberOfRecipients:(unsigned long long)a4 maxNumberOfKeywords:(unsigned long long)a5 maxNumberOfAttachments:(unsigned long long)a6;
- (id)description;
- (void).cxx_destruct;

@end
