@class NSString;

@interface MPServerObjectDatabaseEntityType : NSObject

@property (readonly, copy, nonatomic) NSString *serverEntityType;
@property (readonly, copy, nonatomic) NSString *genericObjectRelationshipKey;

+ (id)entityTypeWithServerEntityType:(id)a0 genericObjectRelationshipKey:(id)a1;

- (void).cxx_destruct;

@end
