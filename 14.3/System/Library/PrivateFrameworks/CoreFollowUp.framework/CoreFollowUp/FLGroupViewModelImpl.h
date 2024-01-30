@class NSString, NSMutableArray;

@interface FLGroupViewModelImpl : NSObject <FLGroupViewModel> {
    NSMutableArray *_mutableItems;
}

@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *rowTitle;
@property (copy, nonatomic) NSString *groupTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0;
- (id)items;
- (BOOL)shouldCoalesceItems;
- (BOOL)restrictionEnabled;

@end
