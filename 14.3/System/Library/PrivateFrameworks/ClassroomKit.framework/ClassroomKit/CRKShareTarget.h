@class DMFControlGroupIdentifier, NSDictionary, NSString, CATTaskClient, NSData;

@interface CRKShareTarget : NSObject

@property (retain, nonatomic) CATTaskClient *taskClient;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property (copy, nonatomic) DMFControlGroupIdentifier *courseIdentifier;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *secondaryName;
@property (retain, nonatomic) NSData *iconImageData;
@property (nonatomic, getter=isGroup) BOOL group;
@property (nonatomic, getter=isCourse) BOOL course;
@property (nonatomic, getter=isInstructor) BOOL instructor;
@property (nonatomic) BOOL supportsFileURLs;

+ (id)sandboxExtensionsForFileURLs:(id)a0;
+ (id)sandboxExtensionForPath:(id)a0;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithDictionary:(id)a0;
- (BOOL)isEqualToShareTarget:(id)a0;
- (id)operationToSendItems:(id)a0 fromBundleIdentifier:(id)a1 description:(id)a2 previewImageData:(id)a3;

@end
