@class NSString;

@interface WFWorkflowWizardNameConfiguration : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *footerText;
@property (nonatomic) BOOL showsHeySiri;
@property (nonatomic) BOOL showsSuggestions;
@property (copy, nonatomic) NSString *doneBarButtonTitle;

+ (id)addToSiriConfiguration;
+ (id)newWorkflowConfiguration;
+ (id)tellSiriInfoText;

- (id)init;
- (void).cxx_destruct;

@end
