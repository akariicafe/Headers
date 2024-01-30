@class NSDictionary, _ANEInMemoryModel;

@interface _MLCANEModel : NSObject

@property (readonly, retain, nonatomic) _ANEInMemoryModel *anefModel;
@property (readonly, copy, nonatomic) NSDictionary *options;
@property (readonly, nonatomic) unsigned int qos;
@property (readonly, copy, nonatomic) NSDictionary *plist;

+ (id)objectWithModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 plist:(id)a3;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithModel:(id)a0 options:(id)a1 qos:(unsigned int)a2 plist:(id)a3;

@end
