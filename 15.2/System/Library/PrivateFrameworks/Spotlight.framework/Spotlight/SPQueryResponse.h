@class SPQueryTask, NSArray, NSString;

@interface SPQueryResponse : NSObject

@property (nonatomic) int kind;
@property (nonatomic) int state;
@property (retain, nonatomic) SPQueryTask *task;
@property (retain, nonatomic) NSArray *resultSections;
@property (retain, nonatomic) NSString *sessionEntityString;

- (id)initWithTask:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)copy;

@end
