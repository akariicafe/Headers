@class NSString;

@interface HUPresenceOptionSelectionConfirmationPrompt : NSObject

@property (readonly, copy, nonatomic) NSString *alertTitle;
@property (readonly, copy, nonatomic) NSString *alertBody;
@property (readonly, nonatomic) BOOL resetLocationToHomeOnConfirmation;

- (id)init;
- (void).cxx_destruct;
- (id)initWithAlertTitle:(id)a0 alertBody:(id)a1 resetLocationToHomeOnConfirmation:(BOOL)a2;

@end
