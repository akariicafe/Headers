@class NSString;

@interface IMDHandleRecord : IMDRecord <IMDBridgedRecord>

@property (readonly, nonatomic) long long rowID;
@property (readonly, copy, nonatomic) NSString *canonicalizedURIString;
@property (readonly, copy, nonatomic) NSString *uncanonicalizedURIString;
@property (readonly, copy, nonatomic) NSString *countryCodeString;

+ (id)allocWithZone:(struct _NSZone { } *)a0;

- (unsigned long long)_cfTypeID;
- (id)init;
- (struct __CFArray { } *)_localCache;
- (struct { char *x0; long long x1; struct *x2; unsigned int x3; void *x4; })_propertyDescriptorForProperty:(long long)a0;
- (void *)_fetchUpdatedRecord;
- (int)_propertyIDForProperty:(long long)a0;
- (struct _IMDHandleRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; } *)cfHandleRecord;

@end
