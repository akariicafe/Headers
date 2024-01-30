@class NSString;

@interface MLCustomModelLoader : NSObject <MLModelSpecificationLoader>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parametersFromCustomModelSpec:(struct CustomModel { void /* function */ **x0; struct InternalMetadataWithArenaLite { void *x0; } x1; struct MapFieldLite<google::protobuf::internal::MapEntryLite<std::__1::basic_string<char>, CoreML::Specification::CustomModel_CustomModelParamValue, google::protobuf::internal::WireFormatLite::TYPE_STRING, google::protobuf::internal::WireFormatLite::TYPE_MESSAGE, 0>, std::__1::basic_string<char>, CoreML::Specification::CustomModel_CustomModelParamValue, google::protobuf::internal::WireFormatLite::TYPE_STRING, google::protobuf::internal::WireFormatLite::TYPE_MESSAGE, 0> { struct Arena *x0; struct Map<std::__1::basic_string<char>, CoreML::Specification::CustomModel_CustomModelParamValue> { struct Arena *x0; int x1; struct InnerMap *x2; } x1; } x2; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x3; struct ArenaStringPtr { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > *x0; } x4; int x5; } *)a0 error:(id *)a1;
+ (id)loadModelFromSpecification:(struct _MLModelSpecification { struct shared_ptr<CoreML::Specification::Model> { struct Model *x0; struct __shared_weak_count *x1; } x0; } *)a0 configuration:(id)a1 error:(id *)a2;


@end
