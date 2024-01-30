@class NSArray, _CDInteractionStore, NSPredicate, NSString, NSMutableDictionary;

@interface _CDPInteractionStoreDataHarvester : NSObject <_CDPDataHarvester> {
    NSMutableDictionary *_identifierToContactMap;
}

@property (retain, nonatomic) _CDInteractionStore *store;
@property (retain, nonatomic) NSPredicate *predicate;
@property (readonly, nonatomic) NSArray *interactions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)contactForIdentifier:(id)a0;
- (void).cxx_destruct;
- (void)loadWithLimit:(unsigned long long)a0 dataPointReader:(id /* block */)a1 completion:(id /* block */)a2;

@end
