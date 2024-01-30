@interface TSKChangeRecord : NSObject

@property (readonly, nonatomic) int kind;
@property (readonly, nonatomic) id details;
@property (readonly, nonatomic) BOOL allowedInCommit;

+ (id)changeRecordWithKind:(int)a0 details:(id)a1;

- (void).cxx_destruct;
- (id)initWithKind:(int)a0 details:(id)a1;

@end
