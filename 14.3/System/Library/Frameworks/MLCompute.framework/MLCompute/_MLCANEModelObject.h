@class _ANERequest, NSDictionary, _ANEModel, _ANEClient;

@interface _MLCANEModelObject : NSObject

@property (readonly, nonatomic) _ANEClient *connection;
@property (readonly, nonatomic) _ANEModel *model;
@property (retain, nonatomic) _ANERequest *request;
@property (readonly, nonatomic) NSDictionary *ANEFOptions;
@property (readonly, nonatomic) unsigned int qos;
@property (readonly, nonatomic) NSDictionary *graphPlist;

+ (id)objectWithModel:(id)a0 connection:(id)a1 request:(id)a2 options:(id)a3 qos:(unsigned int)a4 graphPlist:(id)a5;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModel:(id)a0 connection:(id)a1 request:(id)a2 options:(id)a3 qos:(unsigned int)a4 graphPlist:(id)a5;

@end
