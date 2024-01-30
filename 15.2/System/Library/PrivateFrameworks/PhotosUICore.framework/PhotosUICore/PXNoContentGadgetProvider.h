@class NSArray, NSString;

@interface PXNoContentGadgetProvider : PXGadgetProvider

@property (copy, nonatomic) NSArray *noContentGadgets;
@property (copy, nonatomic) NSString *localizedTitle;
@property (copy, nonatomic) NSString *localizedMessage;

- (void).cxx_destruct;
- (unsigned long long)estimatedNumberOfGadgets;
- (void)generateGadgets;
- (id)initWithLocalizedTitle:(id)a0 localizedMessage:(id)a1;

@end
