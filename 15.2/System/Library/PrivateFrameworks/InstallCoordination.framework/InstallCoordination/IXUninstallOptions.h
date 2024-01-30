@interface IXUninstallOptions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL requestUserConfirmation;
@property (nonatomic) BOOL waitForDeletion;
@property (nonatomic) BOOL showArchiveOption;
@property (nonatomic) BOOL systemAppNotAllowed;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
