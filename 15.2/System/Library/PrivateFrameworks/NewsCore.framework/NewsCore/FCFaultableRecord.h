@class NSString, NTPBRecordBase, NSData, PBCodable;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _recordLock;
    PBCodable *_record;
    NSData *_recordData;
    NTPBRecordBase *_recordBase;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)a0;

- (void)writeToKeyValuePair:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
