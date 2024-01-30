@class NSString;

@interface WPDPersistence : NSObject

@property (nonatomic) BOOL needsInit;
@property (nonatomic) BOOL systemFirstUnlocked;
@property (retain, nonatomic) NSString *bootUUID;
@property (nonatomic) BOOL isRangingEnabled;

- (void)firstUnlockedWithEvent:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)deletePropertyValue:(id)a0;
- (void)dealloc;
- (void)synchronisePrefs;
- (void)writeStringProperty:(id)a0 Value:(id)a1;
- (id)currentBootSessionUUID;
- (BOOL)readBoolPropertyValue:(id)a0;
- (id)readStringPropertyValue:(id)a0;
- (void)writeBoolProperty:(id)a0 Value:(BOOL)a1;

@end
