@class NSString;

@interface CKVHomeEntity : NSObject <CKVocabularyItem>

@property (readonly, nonatomic) NSString *itemId;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned short entityType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItemId:(id)a0 name:(id)a1 entityType:(unsigned short)a2;
- (BOOL)isEqualToHomeEntity:(id)a0;

@end
