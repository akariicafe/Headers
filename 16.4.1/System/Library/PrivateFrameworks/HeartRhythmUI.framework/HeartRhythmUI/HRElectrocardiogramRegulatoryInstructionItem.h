@class NSString, NSAttributedString;

@interface HRElectrocardiogramRegulatoryInstructionItem : NSObject <HRFeatureRegulatoryPanelDisplayable>

@property (readonly, copy, nonatomic) NSAttributedString *titleString;
@property (readonly, copy, nonatomic) NSAttributedString *valueString;
@property (readonly, nonatomic) BOOL isInteractive;
@property (readonly, nonatomic) long long cellAccessoryType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleUserInteractionWithItemWithHostViewController:(id)a0;
- (void)presentHostedInstructionsForUseHostViewController:(id)a0 helpViewController:(id)a1;

@end
