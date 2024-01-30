@class NSString;

@interface TSAExportableDocumentType : NSObject

@property (readonly, nonatomic) NSString *type;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSString *exportProgressMessage;

+ (id)exportableTypeWithType:(id)a0 localizedName:(id)a1 exportProgressMessage:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithType:(id)a0 localizedName:(id)a1 exportProgressMessage:(id)a2;

@end
