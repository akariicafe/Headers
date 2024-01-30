@class ML3ActiveTransaction, ML3MediaLibraryWriter, NSDictionary, NSError, ML3Client, ML3MusicLibrary;

@interface ML3DatabaseOperation : NSOperation {
    ML3MediaLibraryWriter *_writer;
    ML3ActiveTransaction *_transaction;
    BOOL _beganNewTransaction;
}

@property (readonly, nonatomic) unsigned long long type;
@property (readonly, nonatomic) ML3MusicLibrary *library;
@property (retain, nonatomic) ML3Client *originatingClient;
@property (copy, nonatomic) NSDictionary *options;
@property (copy, nonatomic) NSDictionary *attributes;
@property (readonly, nonatomic) ML3ActiveTransaction *transaction;
@property (readonly, nonatomic) BOOL success;
@property (readonly, nonatomic) NSError *error;

+ (id)databaseOperationForType:(unsigned long long)a0 withLibrary:(id)a1 writer:(id)a2;

- (void)setSuccess:(BOOL)a0;
- (id)description;
- (void)main;
- (void)setError:(id)a0;
- (void).cxx_destruct;
- (BOOL)_execute:(id *)a0;
- (BOOL)_verifyLibraryConnectionAndAttributesProperties:(id *)a0;
- (id)initWithLibrary:(id)a0 writer:(id)a1;
- (id)_operationTypeDescription;

@end
