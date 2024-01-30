@class NSString;

@interface HMBLocalZoneQueryResultAllOfType : HMBLocalZoneQueryResultRecordColumns

@property (readonly, nonatomic) int modelClassNameOffset;
@property (readonly, nonatomic) NSString *modelClassName;

- (BOOL)bindPropertiesToStatement:(struct sqlite3_stmt { } *)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)initWithLocalZone:(id)a0 modelClassName:(id)a1;

@end
