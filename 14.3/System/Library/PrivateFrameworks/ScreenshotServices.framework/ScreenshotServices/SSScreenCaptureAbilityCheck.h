@class NSString;

@interface SSScreenCaptureAbilityCheck : NSObject

@property (nonatomic) BOOL isAbleToTakeScreenshots;
@property (copy, nonatomic) NSString *reasonForNotBeingAbleToTakeScreenshots;

+ (id)abilityCheck;

- (void).cxx_destruct;

@end
