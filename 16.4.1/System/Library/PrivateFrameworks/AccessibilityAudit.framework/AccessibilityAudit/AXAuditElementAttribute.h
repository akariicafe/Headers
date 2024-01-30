@class NSString;

@interface AXAuditElementAttribute : NSObject

@property (copy, nonatomic) NSString *attributeName;
@property (copy, nonatomic) NSString *developerAPISelector;
@property (copy, nonatomic) NSString *humanReadableName;
@property (nonatomic, getter=isSettable) BOOL settable;
@property (nonatomic) BOOL performsAction;
@property (nonatomic) BOOL isSupported;
@property (nonatomic) BOOL isInternal;
@property (nonatomic) BOOL displayInline;
@property (nonatomic) BOOL displayAsTree;
@property (nonatomic) long long valueType;

+ (void)registerTransportableObjectWithManager:(id)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
