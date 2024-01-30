@class MPMediaLibraryEntityTranslator;

@interface _MPMediaLibraryEntityRelationshipTranslator : NSObject

@property (nonatomic) Class relationshipModelClass;
@property (nonatomic) BOOL transient;
@property (nonatomic) struct ModelPropertyBase { void /* function */ **x0; struct EntityClass *x1; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x2; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x3; } *foreignPropertyBase;
@property (nonatomic) struct shared_ptr<std::__1::map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > > { struct map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > > *__ptr_; struct __shared_weak_count *__cntrl_; } relationshipValidationProperties;
@property (copy, nonatomic) id /* block */ validRelationshipHandler;
@property (readonly, nonatomic) MPMediaLibraryEntityTranslator *entityTranslator;

- (void).cxx_destruct;
- (id).cxx_construct;

@end
