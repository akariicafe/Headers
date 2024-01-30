@class NSArray, NSDictionary;
@protocol CKInboxModelDelegate;

@interface CKInboxModel : NSObject

@property (retain, nonatomic) NSArray *sections;
@property (copy, nonatomic) id /* block */ footerAction;
@property (retain, nonatomic) NSDictionary *itemsMap;
@property (weak, nonatomic) id<CKInboxModelDelegate> delegate;
@property (copy, nonatomic) id /* block */ logInboxViewedMetric;

- (void).cxx_destruct;
- (void)setIsCollapsed:(BOOL)a0;
- (id)initWithSections:(id)a0 footerAction:(id /* block */)a1;
- (id)buildItemsMap:(id)a0;

@end
