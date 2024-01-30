@class NSString, NSDictionary, IMDMessageRecord;

@interface IMDAttachmentRecord : IMDRecord <IMDBridgedRecord>

@property (readonly, nonatomic) long long rowID;
@property (readonly, copy, nonatomic) NSString *guid;
@property (readonly, copy, nonatomic) NSString *path;
@property (readonly, copy, nonatomic) NSString *transferName;
@property (readonly, copy, nonatomic) NSString *utiString;
@property (readonly, nonatomic) long long transferState;
@property (readonly, nonatomic, getter=isOutgoing) BOOL outgoing;
@property (readonly, nonatomic, getter=isSticker) BOOL sticker;
@property (readonly, nonatomic, getter=isCommSafetySensitive) BOOL commSafetySensitive;
@property (readonly, nonatomic) NSDictionary *attributionInfo;
@property (readonly, nonatomic) IMDMessageRecord *messageRecord;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)keyPathsToColumns;

- (unsigned long long)_cfTypeID;
- (id)init;
- (struct __CFArray { } *)_localCache;
- (struct { char *x0; long long x1; struct *x2; unsigned int x3; void *x4; })_propertyDescriptorForProperty:(long long)a0;
- (void *)_fetchUpdatedRecord;
- (int)_propertyIDForProperty:(long long)a0;
- (struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; long long x1; struct __CFArray *x2; } *)cfAttachmentRecord;

@end
