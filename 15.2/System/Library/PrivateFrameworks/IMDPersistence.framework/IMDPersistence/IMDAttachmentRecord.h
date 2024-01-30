@class NSString;

@interface IMDAttachmentRecord : IMDRecord <IMDBridgedRecord>

@property (readonly, nonatomic) long long rowID;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, copy, nonatomic) NSString *filename;
@property (readonly, copy, nonatomic) NSString *utiString;
@property (readonly, nonatomic, getter=isCommSafetySensitive) BOOL commSafetySensitive;
@property (readonly, nonatomic) long long transferState;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)keyPathsToColumns;

- (int)_propertyIDForProperty:(long long)a0;
- (struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; } *)cfAttachmentRecord;
- (struct { char *x0; long long x1; struct *x2; unsigned int x3; void *x4; })_propertyDescriptorForProperty:(long long)a0;
- (struct __CFArray { } *)_localCache;
- (unsigned long long)_cfTypeID;
- (id)init;
- (void *)_fetchUpdatedRecord;

@end
