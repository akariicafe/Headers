@class NSString, NSURL;
@protocol DNDSBackingStoreDelegate;

@interface DNDSJSONBackingStore : NSObject <DNDSSysdiagnoseDataProvider, DNDSBackingStore> {
    Class _recordClass;
    NSURL *_fileURL;
    unsigned long long _versionNumber;
    BOOL _deviceOutOfSpace;
}

@property (readonly, copy, nonatomic) NSString *sysdiagnoseDataIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<DNDSBackingStoreDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (id)sysdiagnoseDataIdentifier;
- (id)sysdiagnoseDataForDate:(id)a0;
- (id)readRecordWithError:(id *)a0;
- (unsigned long long)writeRecord:(id)a0 error:(id *)a1;
- (id)initWithRecordClass:(Class)a0 fileURL:(id)a1 versionNumber:(unsigned long long)a2;

@end
