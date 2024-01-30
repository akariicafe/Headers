@class NSString;

@interface CKVMediaEntity : NSObject <CKVocabularyItem>

@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) unsigned short entityType;
@property (readonly, nonatomic) NSString *name;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)mediaEntityWithPersistentId:(unsigned long long)a0 entityType:(unsigned short)a1 name:(id)a2;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemId:(id)a0 entityType:(unsigned short)a1 name:(id)a2;
- (BOOL)isEqualToMediaEntity:(id)a0;

@end
