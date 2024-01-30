@class NSString, INShortcut, WFWorkflow, NSDate, INImage;

@interface VCVoiceShortcut : NSObject <INVCVoiceShortcut, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *dateCreated;
@property (readonly, nonatomic) NSDate *dateLastModified;
@property (readonly, nonatomic) BOOL hasBeenModified;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *phrase;
@property (readonly, copy, nonatomic) NSString *shortcutName;
@property (readonly, copy, nonatomic) NSString *shortcutDescription;
@property (readonly, copy, nonatomic) NSString *associatedAppBundleIdentifier;
@property (readonly, copy, nonatomic) INImage *keyImage;
@property (readonly, nonatomic) INShortcut *shortcut;
@property (readonly, nonatomic) WFWorkflow *workflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 phrase:(id)a1 shortcutName:(id)a2 shortcutDescription:(id)a3 associatedAppBundleIdentifier:(id)a4 dateCreated:(id)a5 dateLastModified:(id)a6 shortcut:(id)a7 keyImageData:(id)a8 error:(id *)a9;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
