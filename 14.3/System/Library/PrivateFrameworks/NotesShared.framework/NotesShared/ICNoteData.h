@class NSData, ICNote;

@interface ICNoteData : NSManagedObject

@property (nonatomic, getter=isSettingNoteData) BOOL settingNoteData;
@property (retain, nonatomic) NSData *cryptoInitializationVector;
@property (retain, nonatomic) NSData *cryptoTag;
@property BOOL needsToBeSaved;
@property (retain, nonatomic) NSData *data;
@property (retain, nonatomic) ICNote *note;
@property (readonly, nonatomic) NSData *primitiveData;

- (void)willSave;
- (void)saveNoteDataIfNeeded;
- (void)willAccessValueForKey:(id)a0;

@end
