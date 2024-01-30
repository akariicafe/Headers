@class NSString, NSArray;

@interface WFMDMVerifier : NSObject

@property (readonly, copy, nonatomic) NSString *actionName;
@property (readonly, copy, nonatomic) NSArray *contentAttributionSets;

+ (id)contentAttributionsFromContentAttributionSets:(id)a0 withManagedLevel:(unsigned long long)a1;

- (id)initWithAction:(id)a0;
- (void).cxx_destruct;
- (BOOL)canSendDataToContentDestination:(id)a0 error:(id *)a1;
- (id)errorFromFailedVerificationContentAttributionSets:(id)a0 contentDestination:(id)a1 destinationManagedLevel:(unsigned long long)a2;
- (id)initWithContentAttributionSets:(id)a0 actionName:(id)a1;

@end
