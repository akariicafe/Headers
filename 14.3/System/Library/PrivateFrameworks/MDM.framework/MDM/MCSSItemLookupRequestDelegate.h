@class SSItemLookupRequest, NSString, NSArray;

@interface MCSSItemLookupRequestDelegate : MCSSRequestDelegate <SSItemLookupRequestDelegate> {
    NSArray *_items;
}

@property (readonly, retain, nonatomic) SSItemLookupRequest *request;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instance;

- (void).cxx_destruct;
- (void)itemLookupRequest:(id)a0 didFindItems:(id)a1;
- (void)startCompletionBlock:(id /* block */)a0;

@end
