@class NSArray, NSString;
@protocol HMDStereoPairDailyCountProviderContext;

@interface HMDStereoPairDailyCountProvider : NSObject <HMDLogEventDailyProvider>

@property (readonly) id<HMDStereoPairDailyCountProviderContext> context;
@property (readonly, nonatomic) NSArray *logEventProviderDailySubmissionBlocks;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
