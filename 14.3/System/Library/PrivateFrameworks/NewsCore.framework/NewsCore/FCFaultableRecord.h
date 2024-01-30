@class NSString, NTPBRecordBase, NSData, PBCodable;

@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding>

@property (retain, nonatomic) NSData *recordData;
@property (retain, nonatomic) NTPBRecordBase *recordBase;
@property (retain, nonatomic) PBCodable *record;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } recordLock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)faultableRecordWithRecord:(id)a0;
+ (id)readValueFromKeyValuePair:(id)a0;
+ (id)faultableRecordWithRecordData:(id)a0;
+ (int)keyValuePairType;

- (id)init;
- (void).cxx_destruct;
- (void)writeToKeyValuePair:(id)a0;

@end
