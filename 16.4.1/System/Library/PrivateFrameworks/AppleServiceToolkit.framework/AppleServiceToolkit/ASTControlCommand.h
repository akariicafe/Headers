@class NSMutableDictionary;

@interface ASTControlCommand : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL forceSequential;
@property (nonatomic) BOOL haltOnError;
@property (retain, nonatomic) NSMutableDictionary *actionStorage;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)requestData;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (id)description;
- (void).cxx_destruct;
- (BOOL)reset;
- (void)updateAction:(id)a0;
- (BOOL)allActionsFinished;
- (void)performActionsWithSession:(id)a0 queue:(id)a1;
- (id)requestWithData:(id)a0 session:(id)a1 queue:(id)a2;

@end
