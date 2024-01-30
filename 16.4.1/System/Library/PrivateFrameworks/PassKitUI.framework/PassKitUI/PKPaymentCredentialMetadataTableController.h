@class NSArray;

@interface PKPaymentCredentialMetadataTableController : NSObject {
    NSArray *_metadata;
    long long _setupContext;
    long long _cellStyle;
}

- (long long)numberOfRowsInSection:(long long)a0;
- (id)cellForRowAtIndexPath:(id)a0;
- (id)tableView:(id)a0 contextMenuConfigurationForRowAtIndexPath:(id)a1 point:(struct CGPoint { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)initWithMetadata:(id)a0 setupContext:(long long)a1 cellStyle:(long long)a2;
- (void)willDisplayCell:(id)a0 forRowAtIndexPath:(id)a1;

@end
