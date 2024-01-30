@class NSString;

@interface IPAAdjustmentStackSerializer : NSObject <IPAAdjustmentStackSerializer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archiveDictionary:(id)a0 error:(id *)a1;
+ (id)compressData:(id)a0 error:(id *)a1;
+ (id)decompressData:(id)a0 error:(id *)a1;
+ (id)archiveDictionary:(id)a0;
+ (id)JSONFromData:(id)a0;
+ (id)B64StringForData:(id)a0;
+ (id)JSONFromData:(id)a0 error:(id *)a1;
+ (id)decompressData:(id)a0;
+ (id)compressData:(id)a0;
+ (id)dataFromB64String:(id)a0;
+ (id)dataFromJSON:(id)a0;
+ (id)dataFromJSON:(id)a0 error:(id *)a1;
+ (id)dataFromPropertyList:(id)a0;
+ (id)dataFromPropertyList:(id)a0 error:(id *)a1;
+ (id)propertyListFromData:(id)a0;
+ (id)propertyListFromData:(id)a0 error:(id *)a1;
+ (id)unarchiveData:(id)a0;
+ (id)unarchiveData:(id)a0 error:(id *)a1;

- (id)_adjustmentStackFromData:(id)a0 error:(id *)a1;
- (id)_dataFromAdjustmentStack:(id)a0 error:(id *)a1;
- (id)adjustmentStackFromData:(id)a0 error:(id *)a1;
- (id)archiveFromData:(id)a0 error:(id *)a1;
- (id)dataFromAdjustmentStack:(id)a0 error:(id *)a1;
- (id)dataFromArchive:(id)a0 error:(id *)a1;

@end
