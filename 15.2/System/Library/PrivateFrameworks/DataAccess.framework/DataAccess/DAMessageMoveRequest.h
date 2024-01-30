@class NSString;

@interface DAMessageMoveRequest : NSObject

@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *fromFolder;
@property (copy, nonatomic) NSString *toFolder;
@property (retain, nonatomic) id context;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)initMoveRequestWithMessage:(id)a0 fromFolder:(id)a1 toFolder:(id)a2;

@end
