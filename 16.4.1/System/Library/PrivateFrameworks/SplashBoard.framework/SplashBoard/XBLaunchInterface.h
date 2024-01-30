@class NSString, NSArray, XBLaunchInterfaceConfiguration;

@interface XBLaunchInterface : NSObject <BSXPCCoding, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=_isDefault) BOOL _default;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *urlSchemes;
@property (readonly, nonatomic) XBLaunchInterfaceConfiguration *configuration;
@property (readonly, nonatomic) BOOL isXIB;
@property (readonly, nonatomic) BOOL isStoryboard;
@property (readonly, nonatomic) BOOL isConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithXPCDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithType:(unsigned long long)a0 name:(id)a1 identifier:(id)a2 urlSchemes:(id)a3 isDefault:(BOOL)a4;
- (id)initWithCoder:(id)a0;
- (id)initWithConfiguration:(id)a0 identifier:(id)a1 urlSchemes:(id)a2 isDefault:(BOOL)a3;
- (id)initWithXPCDictionary:(id)a0;
- (void).cxx_destruct;

@end
