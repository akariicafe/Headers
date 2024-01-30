@class NSArray, NSString;
@protocol HMTelevisionProfileDelegate;

@interface HMTelevisionProfile : HMAccessoryProfile <_HMTelevisionProfileDelegate>

@property (readonly) NSArray *mediaSourceDisplayOrder;
@property (readonly) BOOL mediaSourceDisplayOrderModifiable;
@property (weak) id<HMTelevisionProfileDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)a0;
- (id)initWithTelevisionService:(id)a0 linkedServices:(id)a1;
- (void)televisionProfileDidUpdateSourceDisplayOrder:(id)a0;
- (void)updateMediaSourceDisplayOrder:(id)a0 completionHandler:(id /* block */)a1;

@end
