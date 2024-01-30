@class NSString, NSNumber;

@interface MontrealNNModelQuantization : MontrealNNDescription <MontrealNNDescriptionProtocol>

@property (readonly) NSString *weightStorage;
@property (readonly) NSNumber *weightStorageRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
