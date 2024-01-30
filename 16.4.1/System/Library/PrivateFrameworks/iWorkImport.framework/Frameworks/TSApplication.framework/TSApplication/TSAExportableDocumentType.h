@class NSString;

@interface TSAExportableDocumentType : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *exportProgressMessage;

+ (id)exportableTypeWithType:(id)a0 localizedName:(id)a1 exportProgressMessage:(id)a2;

- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithType:(id)a0 localizedName:(id)a1 exportProgressMessage:(id)a2;

@end
