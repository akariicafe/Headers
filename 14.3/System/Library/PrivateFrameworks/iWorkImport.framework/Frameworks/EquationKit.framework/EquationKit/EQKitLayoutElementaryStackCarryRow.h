@class NSString;

@interface EQKitLayoutElementaryStackCarryRow : EQKitLayoutElementaryStackDigitRow <EQKitLayoutElementaryStackRow> {
    struct vector<EQKitTypes::Crossout::Enum, std::__1::allocator<EQKitTypes::Crossout::Enum> > { int *__begin_; int *__end_; struct __compressed_pair<EQKitTypes::Crossout::Enum *, std::__1::allocator<EQKitTypes::Crossout::Enum> > { int *__value_; } __end_cap_; } mCrossouts;
}

@property (readonly, nonatomic) long long alignmentShift;
@property (nonatomic) unsigned long long firstColumnIndex;
@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) BOOL spansStack;
@property (readonly, nonatomic) double followingSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id).cxx_construct;
- (void)populateMaxColumnWidths:(struct __wrap_iter<double *> { double *x0; })a0;
- (id)initWithChildren:(id)a0 decimalPoint:(unsigned long long)a1 position:(long long)a2 followingSpace:(double)a3 crossouts:(const struct vector<EQKitTypes::Crossout::Enum, std::__1::allocator<EQKitTypes::Crossout::Enum> > { int *x0; int *x1; struct __compressed_pair<EQKitTypes::Crossout::Enum *, std::__1::allocator<EQKitTypes::Crossout::Enum> > { int *x0; } x2; } *)a4;
- (int)crossoutAtColumnIndex:(unsigned long long)a0;

@end
