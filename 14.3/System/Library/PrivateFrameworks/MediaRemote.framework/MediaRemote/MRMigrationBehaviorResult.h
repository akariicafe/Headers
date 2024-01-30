@class NSString, NSError;

@interface MRMigrationBehaviorResult : NSObject

@property (retain, nonatomic) NSString *sourceUID;
@property (retain, nonatomic) NSString *destinationUID;
@property (nonatomic) long long action;
@property (retain, nonatomic) NSString *reason;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
