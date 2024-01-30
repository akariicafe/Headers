@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface _ML3ValidatableDatabase : NSObject {
    unsigned long long _queueID;
}

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic) unsigned long long validationState;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *validationSerialQueue;

- (BOOL)currentQueueIsValidationQueue;
- (void).cxx_destruct;
- (id)init;
- (id)initWithDatabasePath:(id)a0;

@end
