@class NSCKRecordMetadata, NSManagedObject;

@interface _PFCKInsertedMetadataLink : NSObject {
    NSCKRecordMetadata *_recordMetadata;
    NSManagedObject *_insertedObject;
}

- (id)description;
- (void)dealloc;

@end
