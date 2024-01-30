@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _ML3ValidatableDatabase : NSObject {
    unsigned long long _queueID;
}

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic) unsigned long long validationState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue;

- (id)init;
- (void).cxx_destruct;
- (BOOL)currentQueueIsValidationQueue;
- (id)initWithDatabasePath:(id)a0;

@end
