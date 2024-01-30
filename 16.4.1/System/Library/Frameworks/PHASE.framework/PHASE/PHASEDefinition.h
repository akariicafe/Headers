@class NSString;

@interface PHASEDefinition : NSObject

@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *uid;

+ (id)new;

- (void)setUid:(id)a0;
- (id)uid;
- (id)initInternal;
- (id)init;
- (void).cxx_destruct;

@end
