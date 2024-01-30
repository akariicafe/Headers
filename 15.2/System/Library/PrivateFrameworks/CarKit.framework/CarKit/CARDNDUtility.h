@class CARAutomaticDNDStatus;

@interface CARDNDUtility : NSObject

@property (retain, nonatomic) CARAutomaticDNDStatus *DNDStatus;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (id)outputFromRhodesUtility;

@end
