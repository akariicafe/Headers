@class NSMutableDictionary;

@interface ASTControlCommand : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL forceSequential;
@property (nonatomic) BOOL haltOnError;
@property (retain, nonatomic) NSMutableDictionary *actionStorage;

- (id)requestData;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)reset;
- (void)updateAction:(id)a0;
- (id)requestWithData:(id)a0 session:(id)a1 queue:(id)a2;
- (void)performActionsWithSession:(id)a0 queue:(id)a1;
- (BOOL)allActionsFinished;

@end
