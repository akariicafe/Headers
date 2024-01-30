@class NSString, NSArray, SPQueryTask;

@interface SPQueryResponse : NSObject

@property (retain, nonatomic) NSString *sessionEntityString;
@property (retain, nonatomic) NSArray *resultSections;
@property (retain, nonatomic) SPQueryTask *task;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long kind;

- (id)initWithTask:(id)a0;
- (id)copy;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
