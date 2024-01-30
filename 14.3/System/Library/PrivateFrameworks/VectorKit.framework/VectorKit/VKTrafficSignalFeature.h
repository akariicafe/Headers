@interface VKTrafficSignalFeature : VKTrafficFeature

@property (readonly, nonatomic) long long type;

+ (id)stringForTrafficSignalType:(long long)a0;

- (void)populateDebugNode:(struct DebugTreeNode { struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; struct vector<gdc::DebugTreeNode, std::__1::allocator<gdc::DebugTreeNode> > { struct DebugTreeNode *x0; struct DebugTreeNode *x1; struct __compressed_pair<gdc::DebugTreeNode *, std::__1::allocator<gdc::DebugTreeNode> > { struct DebugTreeNode *x0; } x2; } x2; struct vector<gdc::DebugTreeProperty, std::__1::allocator<gdc::DebugTreeProperty> > { struct DebugTreeProperty *x0; struct DebugTreeProperty *x1; struct __compressed_pair<gdc::DebugTreeProperty *, std::__1::allocator<gdc::DebugTreeProperty> > { struct DebugTreeProperty *x0; } x2; } x3; } *)a0;
- (id)initWithTrafficSignal:(id)a0 onRoute:(id)a1;
- (id)initWithTrafficSignalType:(long long)a0 uniqueIdentifier:(id)a1 routeOffset:(struct PolylineCoordinate { unsigned int x0; float x1; })a2 onRoute:(id)a3;

@end
