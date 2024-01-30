@class NSMutableDictionary, VSKeychainItemKind, VSKeychainEditingContext, NSData;

@interface VSKeychainItem : NSObject

@property (retain, nonatomic) NSMutableDictionary *committedValues;
@property (weak, nonatomic) VSKeychainEditingContext *editingContext;
@property (nonatomic, getter=isInserted) BOOL inserted;
@property (nonatomic, getter=isUpdated) BOOL updated;
@property (nonatomic, getter=isDeleted) BOOL deleted;
@property (retain, nonatomic) NSMutableDictionary *primitiveValues;
@property (nonatomic) BOOL hasFaultForData;
@property (readonly, copy, nonatomic) VSKeychainItemKind *itemKind;
@property (readonly, nonatomic) BOOL hasChanges;
@property (readonly, nonatomic) BOOL hasPersistentChangedValues;
@property (copy, nonatomic) NSData *data;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (void)willChangeValueForKey:(id)a0;
- (id)changedValues;
- (id)committedValuesForKeys:(id)a0;
- (void)didAccessValueForKey:(id)a0;
- (id)primitiveValueForKey:(id)a0;
- (void)setPrimitiveValue:(id)a0 forKey:(id)a1;
- (void)willAccessValueForKey:(id)a0;
- (id)committedValueForKey:(id)a0;
- (void)_setCommittedValues:(id)a0 registeringUndo:(BOOL)a1;
- (id)initWithItemKind:(id)a0 insertIntoEditingContext:(id)a1;

@end
