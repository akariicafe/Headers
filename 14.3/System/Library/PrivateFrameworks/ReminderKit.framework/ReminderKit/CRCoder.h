@class NSOrderedSet, NSDictionary, NSMutableOrderedSet;

@interface CRCoder : NSObject

@property (retain, nonatomic) NSMutableOrderedSet *encodedObjects;
@property (nonatomic) struct Document { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct VectorTimestamp *x4; struct VectorTimestamp *x5; struct RepeatedPtrField<CRDT::Document_DocObject> { void **x0; int x1; int x2; int x3; } x6; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x7; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x8; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x9; struct VectorTimestamp *x10; } *currentDocument;
@property (readonly, nonatomic) NSOrderedSet *clusterTypeSet;
@property (readonly, nonatomic) NSDictionary *typeToClassDict;
@property (readonly, nonatomic) NSOrderedSet *typeSet;

+ (void)registerClass:(Class)a0 forType:(id)a1;
+ (void)_registerClass:(Class)a0 forType:(id)a1 cluster:(BOOL)a2;
+ (void)registerCRClasses;

- (void).cxx_destruct;
- (unsigned long long)typeIndexForClass:(Class)a0;

@end
