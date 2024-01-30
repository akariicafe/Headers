@class ABSAddressBook, NSString, CNAccount, CNMutableContainer;

@interface ABSSource : NSObject <ABSRecord>

@property (nonatomic) int revertedRecordID;
@property (readonly, nonatomic) int id;
@property (readonly, nonatomic) unsigned int type;
@property (weak, nonatomic) ABSAddressBook *addressBook;
@property (weak, nonatomic) ABSSource *source;
@property (readonly, nonatomic) NSString *compositeName;
@property (readonly, nonatomic) CNAccount *account;
@property (retain, nonatomic) CNMutableContainer *cnImpl;
@property (readonly, nonatomic) NSString *CNIdentifierString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (unsigned long long)_cfTypeID;
- (void).cxx_destruct;
- (const void *)copyValueForProperty:(int)a0;
- (BOOL)setValue:(void *)a0 forProperty:(int)a1 withError:(struct __CFError **)a2;
- (id)getAccount;
- (id)initWithMutableContainer:(id)a0;
- (BOOL)removeProperty:(int)a0 withError:(id *)a1;
- (void)replaceRecordStorageWithCNObject:(id)a0;
- (void)updateAllValuesWithValuesFromContainer:(id)a0;

@end
