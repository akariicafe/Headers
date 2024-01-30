@class NSString;

@interface TTMergeableStringSelection : NSObject <TTMergeableStringIDTracker> {
    struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> *__begin_; struct pair<TopoID, TopoID> *__end_; struct __compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> *__value_; } __end_cap_; } _selectionRanges;
}

@property (nonatomic) unsigned long long selectionAffinity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)serialize;
- (struct vector<std::__1::pair<TopoID, TopoID>, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> *x0; struct pair<TopoID, TopoID> *x1; struct __compressed_pair<std::__1::pair<TopoID, TopoID> *, std::__1::allocator<std::__1::pair<TopoID, TopoID> > > { struct pair<TopoID, TopoID> *x0; } x2; } *)selectionRanges;
- (void)updateTopoIDRange:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a0 toNewRangeID:(struct TopoIDRange { struct TopoID { id x0; unsigned int x1; } x0; unsigned int x1; })a1;
- (BOOL)hasTopoIDsThatCanChange;
- (void).cxx_destruct;
- (id)initWithData:(id)a0;
- (id)initWithArchive:(const struct Selection { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x4; struct RepeatedPtrField<topotext::Selection_Range> { void **x0; int x1; int x2; int x3; } x5; int x6; } *)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (void)saveToArchive:(struct Selection { void /* function */ **x0; struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > { struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >::__rep, std::__1::allocator<char> > { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long long x2; } x0; struct __short { char x0[23]; struct { unsigned char x0; } x1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x1; unsigned int x2[1]; int x3; struct RepeatedPtrField<std::__1::basic_string<char> > { void **x0; int x1; int x2; int x3; } x4; struct RepeatedPtrField<topotext::Selection_Range> { void **x0; int x1; int x2; int x3; } x5; int x6; } *)a0;

@end
