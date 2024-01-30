@class NSString, IMHandle;

@interface CKIMComposeRecipient : CNComposeRecipient <CKIMComposeRecipient>

@property (readonly, nonatomic) IMHandle *handle;
@property (nonatomic) BOOL useAbbreviatedDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (id)initWithHandle:(id)a0;
- (id)displayString;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)address;
- (void)setIdentifier:(int)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)commentedAddress;
- (id)compositeName;
- (BOOL)isRemovableFromSearchResults;
- (id)objectForDragType:(id)a0;
- (void)releaseIMReferences;
- (id)supportedDragTypes;
- (id)uncommentedAddress;
- (id)unlocalizedLabel;

@end
