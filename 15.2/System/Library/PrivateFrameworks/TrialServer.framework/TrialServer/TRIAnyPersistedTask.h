@class NSData;

@interface TRIAnyPersistedTask : TRIPBMessage

@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSData *serialized;
@property (nonatomic) BOOL hasSerialized;

+ (id)descriptor;

@end
