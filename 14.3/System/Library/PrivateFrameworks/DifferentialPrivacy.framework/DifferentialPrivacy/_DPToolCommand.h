@class _DPStorage, NSString;

@interface _DPToolCommand : NSObject

@property (readonly, nonatomic) _DPStorage *storage;
@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, copy, nonatomic) NSString *arguments;
@property (readonly, copy, nonatomic) NSString *metadata;
@property (readonly, copy, nonatomic) NSString *recordKey;
@property (readonly, copy, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) BOOL writeOK;

+ (id)supportedCommands;
+ (id)supportedMetadataKeys;
+ (id)command:(id)a0 arguments:(id)a1 metadata:(id)a2 recordKey:(id)a3 databasePath:(id)a4 writeOK:(BOOL)a5;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (BOOL)listKeys;
- (id)initWithAction:(id)a0 arguments:(id)a1 metadata:(id)a2 recordKey:(id)a3 databasePath:(id)a4 writeOK:(BOOL)a5;
- (BOOL)recordNumbers:(id)a0 forKey:(id)a1;
- (BOOL)recordBitValues:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (BOOL)recordBitVectors:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (BOOL)recordStrings:(id)a0 metadata:(id)a1 forKey:(id)a2;
- (BOOL)recordWords:(id)a0 forKey:(id)a1;
- (id)queryForKey:(id)a0;
- (BOOL)submitRecordsForKey:(id)a0;
- (BOOL)listReportsFor:(id)a0;
- (BOOL)executeCommand;

@end
