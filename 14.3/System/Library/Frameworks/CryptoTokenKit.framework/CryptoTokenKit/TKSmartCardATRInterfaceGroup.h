@class NSNumber;

@interface TKSmartCardATRInterfaceGroup : NSObject {
    NSNumber *_ABC[3];
}

@property (readonly, nonatomic) NSNumber *TA;
@property (readonly, nonatomic) NSNumber *TB;
@property (readonly, nonatomic) NSNumber *TC;
@property (readonly, nonatomic) NSNumber *protocol;

- (void).cxx_destruct;
- (id)initWithProtocol:(id)a0;
- (id)parseWithY:(char *)a0 toProtocol:(id *)a1 fromSource:(id /* block */)a2 hasNext:(BOOL *)a3;
- (id)description;

@end
