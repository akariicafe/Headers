@class ISImageDescriptor, ISConcreteIcon, NSUUID;

@interface ISGenerationRequest : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) ISConcreteIcon *icon;
@property (retain) ISImageDescriptor *imageDescriptor;
@property (retain) NSUUID *lsDatabaseUUID;
@property unsigned long long lsDatabaseSequenceNumber;

- (id)generateImageReturningRecordIdentifiers:(id *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_decorationRecipeKeyFromType:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)generateImage;

@end
