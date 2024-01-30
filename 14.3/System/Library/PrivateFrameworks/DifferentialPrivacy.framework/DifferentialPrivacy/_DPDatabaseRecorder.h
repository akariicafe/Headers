@class _DPStorage, NSSet;

@interface _DPDatabaseRecorder : _DPDataRecorder

@property (readonly, nonatomic) _DPStorage *db;
@property (readonly, nonatomic) NSSet *blacklistSet;
@property (readonly, nonatomic) unsigned long long puzzlePieceCount;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)recordNumbers:(id)a0;
- (void)recordStrings:(id)a0;
- (void)recordStrings:(id)a0 metadata:(id)a1;
- (void)recordWords:(id)a0;
- (void)recordBitValues:(id)a0;
- (void)recordBitValues:(id)a0 metadata:(id)a1;
- (void)recordBitVectors:(id)a0 metadata:(id)a1;
- (id)initWithKey:(id)a0 storage:(id)a1;
- (id)initWithKey:(id)a0 storage:(id)a1 systemBlacklistPath:(id)a2 runtimeBlacklistPath:(id)a3;
- (BOOL)isMetadataValid:(id)a0;

@end
