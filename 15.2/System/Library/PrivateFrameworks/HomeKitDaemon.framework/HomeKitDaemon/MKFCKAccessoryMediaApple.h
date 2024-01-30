@class NSDictionary, MKFCKResidentAccessoryMediaApple;

@interface MKFCKAccessoryMediaApple : MKFCKAccessoryMedia

@property (retain, nonatomic) NSDictionary *settings;
@property (retain, nonatomic) MKFCKResidentAccessoryMediaApple *resident;

+ (id)fetchRequest;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)_encodeSettingGroup:(id)a0;

@end
