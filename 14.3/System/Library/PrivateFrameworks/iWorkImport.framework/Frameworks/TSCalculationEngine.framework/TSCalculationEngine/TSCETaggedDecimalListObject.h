@interface TSCETaggedDecimalListObject : NSObject {
    struct TSCETaggedDecimalList { struct vector<TSCETaggedDecimal, std::__1::allocator<TSCETaggedDecimal> > { struct TSCETaggedDecimal *__begin_; struct TSCETaggedDecimal *__end_; struct __compressed_pair<TSCETaggedDecimal *, std::__1::allocator<TSCETaggedDecimal> > { struct TSCETaggedDecimal *__value_; } __end_cap_; } _list; unsigned long long _startIdx; unsigned long long _size; } _taggedList;
}

+ (id)createFromVector:(const struct TSCEVector { void /* function */ **x0; struct shared_ptr<TSCEAbstractVector> { struct TSCEAbstractVector *x0; struct __shared_weak_count *x1; } x1; struct TSCEFormat { struct TSCEFormatStruct { unsigned int x0; union { struct { unsigned short x0 : 16; unsigned char x1 : 8; unsigned char x2 : 3; unsigned char x3 : 1; unsigned char x4 : 1; } x0; struct { unsigned char x0 : 8; } x1; struct { unsigned char x0 : 8; unsigned char x1 : 8; unsigned char x2 : 1; } x2; struct { unsigned char x0 : 1; int x1; int x2; int x3; } x3; } x1; id x2; id x3; id x4; } x0; unsigned char x1; } x2; } *)a0 functionSpec:(id)a1 argumentIndex:(int)a2 evaluationContext:(struct TSCEEvaluationContext { } *)a3 ignoreError:(BOOL)a4 ignoreDuplicates:(BOOL)a5;

- (void).cxx_destruct;
- (id).cxx_construct;
- (struct TSCETaggedDecimalList { struct vector<TSCETaggedDecimal, std::__1::allocator<TSCETaggedDecimal> > { struct TSCETaggedDecimal *x0; struct TSCETaggedDecimal *x1; struct __compressed_pair<TSCETaggedDecimal *, std::__1::allocator<TSCETaggedDecimal> > { struct TSCETaggedDecimal *x0; } x2; } x0; unsigned long long x1; unsigned long long x2; } *)taggedDecimalList;

@end
