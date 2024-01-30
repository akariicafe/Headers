@protocol PXFastEnumeration;

@interface PXChangePeopleTypeAction : PXPhotosAction {
    id<PXFastEnumeration> _collections;
}

@property (readonly, nonatomic) long long type;
@property (nonatomic) unsigned long long firstManualOrder;

- (id)collections;
- (void)performAction:(id /* block */)a0;
- (id)actionIdentifier;
- (void).cxx_destruct;
- (id)actionNameLocalizationKey;
- (id)initWithPeople:(id)a0 type:(long long)a1;
- (void)performUndo:(id /* block */)a0;

@end
