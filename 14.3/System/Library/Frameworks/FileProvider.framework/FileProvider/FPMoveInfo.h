@class NSArray, FPActionOperationLocator;

@interface FPMoveInfo : FPActionOperationInfo <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) FPActionOperationLocator *targetFolder;
@property (retain, nonatomic) NSArray *rootFilenames;
@property (nonatomic) unsigned long long lastUsedDatePolicy;
@property (nonatomic) BOOL shouldBounce;
@property (nonatomic) BOOL byCopy;
@property (readonly, nonatomic) BOOL byMoving;

- (void).cxx_destruct;
- (id)initWithOperationID:(id)a0 roots:(id)a1 rootFilenames:(id)a2 targetFolder:(id)a3 lastUsedDatePolicy:(unsigned long long)a4 bounce:(BOOL)a5 byCopy:(BOOL)a6;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
