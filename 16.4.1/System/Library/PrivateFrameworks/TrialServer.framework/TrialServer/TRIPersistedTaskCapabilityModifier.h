@interface TRIPersistedTaskCapabilityModifier : TRIPBMessage

@property (nonatomic) unsigned long long add;
@property (nonatomic) BOOL hasAdd;
@property (nonatomic) unsigned long long remove;
@property (nonatomic) BOOL hasRemove;

+ (id)descriptor;

@end
