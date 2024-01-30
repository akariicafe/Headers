@class NSString, NSDate;

@interface SKADatabaseRemovedUser : NSObject

@property (readonly, nonatomic) NSString *handle;
@property (readonly, nonatomic) NSString *statusTypeIdentifier;
@property (readonly, nonatomic) NSDate *dateRemoved;

- (void).cxx_destruct;
- (id)initWithHandle:(id)a0 statusTypeIdentifier:(id)a1 dateRemoved:(id)a2;
- (id)initWithCoreDataRemovedUser:(id)a0;

@end
