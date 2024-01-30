@class NSString, NSDictionary;

@interface IMDChatRecord : IMDRecord <IMDBridgedRecord>

@property (readonly, nonatomic) long long rowID;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *groupID;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)keyPathsToColumns;

- (int)_propertyIDForProperty:(long long)a0;
- (struct { char *x0; long long x1; struct *x2; unsigned int x3; void *x4; })_propertyDescriptorForProperty:(long long)a0;
- (struct __CFArray { } *)_localCache;
- (unsigned long long)_cfTypeID;
- (struct _IMDChatRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; struct __CFArray *x3; long long x4; struct _IMDMessageRecordStruct *x5; long long x6; } *)cfChatRecord;
- (id)init;
- (void *)_fetchUpdatedRecord;

@end
