@interface IMDHandleRecord : IMDRecord

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)_cfTypeID;
- (struct _IMDHandleRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; } *)cfHandleRecord;
- (id)init;

@end
