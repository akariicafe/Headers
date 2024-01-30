@class UIPrintInteractionController, NSString;

@interface WFPrintActionUIKitUserInterface : WFActionUserInterface <UIPrintInteractionControllerDelegate, WFPrintActionUserInterface>

@property (retain, nonatomic) UIPrintInteractionController *printController;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSString *userInterfaceType;

@end
