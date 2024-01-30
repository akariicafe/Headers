@class NSArray, NSString;
@protocol SKUIRedeemResultsViewDelegate;

@interface SKUIRedeemResultsView : UITableView <UITableViewDelegate, UITableViewDataSource> {
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _contentInsetAdjustments;
}

@property (retain, nonatomic) NSArray *sections;
@property (weak, nonatomic) id<SKUIRedeemResultsViewDelegate> resultsDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)layoutSubviews;
- (id)init;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void).cxx_destruct;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;

@end
