@class NSString, NSNumber, NSDictionary;

@interface MLLoaderEvent : NSObject <CUTCoreAnalyticsMetric>

@property (copy, nonatomic) NSString *modelHash;
@property (copy, nonatomic) NSString *nnModelNetHash;
@property (copy, nonatomic) NSString *nnModelShapeHash;
@property (copy, nonatomic) NSString *nnModelWeightsHash;
@property (copy, nonatomic) NSNumber *modelDimension;
@property (copy, nonatomic) NSNumber *modelType;
@property (copy, nonatomic) NSNumber *modelLoadTime;
@property (copy, nonatomic) NSString *modelVersion;
@property (copy, nonatomic) NSString *compilerVersion;
@property (copy, nonatomic) NSNumber *computeUnits;
@property (copy, nonatomic) NSNumber *modelOrigin;
@property (copy, nonatomic) NSNumber *modelLoadError;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *modelName;
@property (copy, nonatomic) NSNumber *firstPartyExecutable;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)extractAndSetModelDetailsFromArchive:(struct _MLModelInputArchiver { struct IArchive { struct shared_ptr<Archiver::_IArchiveImpl> { struct _IArchiveImpl *x0; struct __shared_weak_count *x1; } x0; struct map<std::__1::basic_string<char>, IArchive, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IArchive> > > { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IArchive> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IArchive>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IArchive>, std::__1::less<std::__1::basic_string<char> >, true> > { unsigned long long x0; } x2; } x0; } x1; } x0; } *)a0;
- (id)numberFromCString:(const char *)a0;

@end
