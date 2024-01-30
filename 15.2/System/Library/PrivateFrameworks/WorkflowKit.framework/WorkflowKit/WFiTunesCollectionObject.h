@class NSString, NSNumber, NSDictionary;

@interface WFiTunesCollectionObject : WFiTunesStoreObject <MTLJSONSerializing>

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *genre;
@property (readonly, nonatomic) NSNumber *trackCount;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
