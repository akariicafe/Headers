@class NSString, NSArray;

@interface PKPaymentCredentialMetadataTableController : NSObject <UITableViewDelegate, UITableViewDataSource> {
    NSArray *_metadata;
    long long _setupContext;
    long long _cellStyle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (id)initWithMetadata:(id)a0 setupContext:(long long)a1 cellStyle:(long long)a2;

@end
