@class NSArray, SCWZoneSchema;

@interface SCWZoneSnapshot : NSObject <SCWZoneReading>

@property (retain, nonatomic) SCWZoneSchema *zoneSchema;
@property (copy, nonatomic) NSArray *records;
@property (readonly, copy, nonatomic) NSArray *allRecords;

- (id)descriptionOfContents;
- (id)recordOfType:(id)a0 passingTest:(id /* block */)a1;
- (id)initWithZoneSchema:(id)a0 records:(id)a1;
- (id)recordOfType:(id)a0;
- (id)recordWithName:(id)a0;
- (id)recordsOfType:(id)a0;
- (BOOL)isEqualToSnapshot:(id)a0;
- (void).cxx_destruct;

@end
