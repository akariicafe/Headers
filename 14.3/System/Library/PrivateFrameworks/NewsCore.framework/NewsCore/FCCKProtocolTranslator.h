@interface FCCKProtocolTranslator : NSObject

+ (id)sharedInstance;

- (id)pQueryFromQuery:(id)a0 error:(id *)a1;
- (id)recordFromPRecord:(id)a0;
- (id)objectRepresentationFromFieldValue:(id)a0;
- (id)referenceFromPReference:(id)a0 error:(id *)a1;
- (int)fieldValueTypeFromObject:(id)a0;
- (id)fieldValueFromObject:(id)a0;
- (id)pRecordIdentifierFromUserRecordName:(id)a0;
- (id)pRecordZoneIdentifierFromRecordZoneID:(id)a0;
- (id)pUserIdentifierFromUserRecordName:(id)a0;
- (id)pRecordIdentifierFromRecordID:(id)a0;
- (id)pReferenceFromReference:(id)a0 error:(id *)a1;
- (id)fieldValueOfType:(int)a0 withObject:(id)a1;
- (id)recordIDFromPRecordIdentifier:(id)a0 error:(id *)a1;

@end
