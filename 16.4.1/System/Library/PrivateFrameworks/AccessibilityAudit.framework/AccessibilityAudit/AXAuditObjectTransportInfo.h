@class NSString;

@interface AXAuditObjectTransportInfo : NSObject

@property (nonatomic) BOOL requiresRawTransportDictionary;
@property (retain, nonatomic) NSString *transportKey;
@property (copy, nonatomic) id /* block */ canEncodeObjectBlock;
@property (copy, nonatomic) id /* block */ createTransportObjectBlock;
@property (copy, nonatomic) id /* block */ createLocalObjectBlock;

- (void).cxx_destruct;
- (id)initWithTransportKey:(id)a0;

@end
