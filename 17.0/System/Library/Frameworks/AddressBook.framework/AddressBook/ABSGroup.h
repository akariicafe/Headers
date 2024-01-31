@class ABSAddressBook, NSString, ABSSource, CNMutableGroup;

@interface ABSGroup : NSObject <ABSRecord>

@property (nonatomic) int revertedRecordID;
@property (readonly, nonatomic) int id;
@property (readonly, nonatomic) unsigned int type;
@property (weak, nonatomic) ABSAddressBook *addressBook;
@property (weak, nonatomic) ABSSource *source;
@property (readonly, nonatomic) NSString *compositeName;
@property (retain, nonatomic) CNMutableGroup *cnImpl;
@property (readonly, nonatomic) NSString *CNIdentifierString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)propertyKeyForPropertyID:(int)a0;

- (unsigned long long)_cfTypeID;
- (id)initWithSource:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void *)copyValueForProperty:(int)a0;
- (BOOL)setValue:(void *)a0 forProperty:(int)a1 withError:(struct __CFError **)a2;
- (id)initWithMutableGroup:(id)a0;
- (BOOL)removeProperty:(int)a0 withError:(id *)a1;
- (void)replaceRecordStorageWithCNObject:(id)a0;
- (void)updateAllValuesWithValuesFromGroup:(id)a0;

@end
