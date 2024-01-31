@class NSArray, NSString;
@protocol CPAlertDelegate;

@interface CPAlertTemplate : CPTemplate <CPAlertDelegate>

@property (class, readonly, nonatomic) unsigned long long maximumActionCount;

@property (weak, nonatomic) id<CPAlertDelegate> templateDelegate;
@property (readonly, copy, nonatomic) NSArray *titleVariants;
@property (readonly, nonatomic) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void)_addAction:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)handleAlertActionForIdentifier:(id)a0;
- (id)initWithTitleVariants:(id)a0 actions:(id)a1;

@end
