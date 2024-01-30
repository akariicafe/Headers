@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface ML3DatabaseValidationClient : NSObject {
    NSMutableDictionary *_validatableDatabases;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)sharedClient;

- (id)_validatableDatabaseForPath:(id)a0;
- (BOOL)validateDatabaseForLibrary:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_validateDatabaseForPath:(id)a0 usingLibrary:(id)a1;
- (BOOL)validateDatabaseAtPath:(id)a0;
- (BOOL)validateDatabaseForConnection:(id)a0;
- (BOOL)isValidatingDatabaseForPath:(id)a0;

@end
