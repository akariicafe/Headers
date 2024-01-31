@class NSMapTable, NSMutableDictionary, CNSaveRequest, NSMutableArray, CNMutableSaveResponse;

@interface CNiOSABSaveContext : NSObject {
    void *_addressBook;
}

@property (readonly, nonatomic) NSMapTable *contactIndicesByInstance;
@property (readonly, nonatomic) NSMapTable *groupIndicesByInstance;
@property (readonly, nonatomic) NSMapTable *containerIndicesByInstance;
@property (retain, nonatomic) NSMutableDictionary *abPersonsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *abGroupsByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *abSourcesByIdentifier;
@property (retain, nonatomic) NSMutableDictionary *abAccountsByIdentifier;
@property (retain, nonatomic) NSMutableArray *contactIdentifiersNeedingMetadataPurge;
@property (readonly, nonatomic) CNSaveRequest *saveRequest;
@property (readonly, nonatomic) CNMutableSaveResponse *saveResponse;
@property (readonly, nonatomic) void *addressBook;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_populateSaveRequestIndexTables;
- (id)indexPathForContactInstance:(id)a0;
- (id)indexPathForContainerInstance:(id)a0;
- (id)indexPathForGroupInstance:(id)a0;
- (id)initWithSaveRequest:(id)a0 response:(id)a1 addressBook:(void *)a2;

@end
