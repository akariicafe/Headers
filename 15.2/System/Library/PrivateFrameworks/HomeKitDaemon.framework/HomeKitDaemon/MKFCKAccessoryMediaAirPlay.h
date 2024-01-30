@class NSString;

@interface MKFCKAccessoryMediaAirPlay : MKFCKAccessoryMedia

@property (nonatomic) short minimumUserPrivilege;
@property (copy, nonatomic) NSString *password;

+ (id)fetchRequest;
+ (id)fetchWithLocalModel:(id)a0 context:(id)a1;

- (BOOL)importIntoLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (BOOL)exportFromLocalModel:(id)a0 updatedProperties:(id)a1 context:(id)a2;
- (id)fetchLocalModelWithContext:(id)a0;
- (BOOL)validateMinimumUserPrivilege:(id *)a0 error:(id *)a1;

@end
